DESCRIPTION = "jack2: a C++ version of the JACK low-latency audio server for multi-processor machines."
HOMEPAGE = "http://jackaudio.org/"
LICENSE = "LGPL-2.1"
SRC_URI = "git://github.com/jackaudio/jack2;protocol=git"

S = "${WORKDIR}/git/"

LIC_FILES_CHKSUM = "file://${S}/common/Jackdmp.cpp;beginline=2;endline=18;md5=c0fd3e161b556a9a7ce5049d8ad8529e"
# tail -n +2 common/Jackdmp.cpp  | head -17 | md5sum

inherit waf

DEPENDS = "alsa-lib libsamplerate0"
RDEPENDS_pd = "alsa-lib libsamplerate0"

FILES_${PN} += "${libdir}/jack/*.so"
FILES_${PN}-dbg += "${libdir}/jack/.debug/*.so"