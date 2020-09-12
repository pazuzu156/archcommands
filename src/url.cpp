#include <url.h>

/**
 * @brief  Encodes a string to be URL safe.
 * @param  input: The string to encode
 * @return An encoded string for use with URLs
 */
std::string Url::encode(std::string input) {
  return run(input, true);
}

/**
 * @brief  Decodes a URL encoded string.
 * @param  input: The string to decode
 * @return An decoded string
 */
std::string Url::decode(std::string input) {
  return run(input, false);
}

/**
 * @brief  Processes the encode/decode request
 * @param  input: Text to encode/decode
 * @param  encode: Should this encode or decode?
 * @return Encoded or decoded string
 */
std::string Url::run(std::string input, bool encode) {
  CURL *curl = curl_easy_init();
  std::stringstream ss;

  if (curl) {
    char *output;

    if (encode) {
      output = curl_easy_escape(curl, input.c_str(), input.size());
    } else {
      output = curl_easy_unescape(curl, input.c_str(), input.size(), nullptr);
    }

    if (output) {
      ss << output;
      curl_free(output);
    }
  }

  return ss.str();
}
