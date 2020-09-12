# Maintainer: Kaleb Klein <apollyon156@pm.me>

pkgname=archcommands
pkgver=0.1
pkgrel=1
pkgdesc="A collection of custom commands"
arch=(any)
license=('MIT')
url="https://github.com/pazuzu156/${pkgname}"
depends=('curl')
makedepends=('cmake')
source=("${pkgname}::git+${url}.git")
validpgpkeys=('120206848BD3375043BF1B253209FA22E33FF70C')
sha256sums=('SKIP')

prepare() {
  mkdir -pv "${srcdir}/${pkgname}/build"
  cd "${srcdir}/${pkgname}/build"
  cmake ..
}

build () {
  cd "${srcdir}/${pkgname}/build"
  make
}

package () {
  cd "${srcdir}/${pkgname}/build"
  install -D -m644 "${srcdir}/${pkgname}/build/src/wiki" "${pkgdir}/usr/local/bin/wiki"
  chmod +x "${pkgdir}/usr/local/bin/wiki"
}
