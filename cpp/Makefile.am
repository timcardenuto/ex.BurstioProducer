ACLOCAL_AMFLAGS = -I m4 -I${OSSIEHOME}/share/aclocal/ossie
AUTOMAKE_OPTIONS = subdir-objects

ossieName = ex.BurstioProducer
libdir = $(prefix)/dom/components/ex/BurstioProducer/cpp
lib_LTLIBRARIES = BurstioProducer.la

xmldir = $(prefix)/dom/components/ex/BurstioProducer
dist_xml_DATA = ../ex.BurstioProducer.scd.xml ../ex.BurstioProducer.prf.xml ../ex.BurstioProducer.spd.xml

.PHONY: convenience-link clean-convenience-link

all-local : convenience-link
clean-local : clean-convenience-link

convenience-link : BurstioProducer.la
	@ln -fs .libs/BurstioProducer.so

clean-convenience-link:
	@rm -f BurstioProducer.so

distclean-local:
	rm -rf m4
	rm -f config.*
	rm -rf autom4te.cache
	rm -f acinclude.m4
	rm -f aclocal.m4
	rm -f configure
	rm -f depcomp
	rm -f install-sh
	rm -f ltmain.sh
	rm -f Makefile.in
	rm -f missing
	rm -rf .deps


# Sources, libraries and library directories are auto-included from a file
# generated by the REDHAWK IDE. You can remove/modify the following lines if
# you wish to manually control these options.
include $(srcdir)/Makefile.am.ide
BurstioProducer_la_SOURCES = $(redhawk_SOURCES_auto)
BurstioProducer_la_LIBADD = $(SOFTPKG_LIBS) $(PROJECTDEPS_LIBS) $(BOOST_LDFLAGS) $(BOOST_THREAD_LIB) $(BOOST_REGEX_LIB) $(BOOST_SYSTEM_LIB) $(INTERFACEDEPS_LIBS) $(redhawk_LDADD_auto)
BurstioProducer_la_CXXFLAGS = -Wall $(SOFTPKG_CFLAGS) $(PROJECTDEPS_CFLAGS) $(BOOST_CPPFLAGS) $(INTERFACEDEPS_CFLAGS) $(redhawk_INCLUDES_auto)
BurstioProducer_la_LDFLAGS = -shared -module -export-dynamic -export-symbols-regex 'make_component' -avoid-version $(redhawk_LDFLAGS_auto)

