INCPATH=$(INCPATH) /I$(SNDFILEINC)
LIBPATH=$(LIBPATH) /LIBPATH:$(SNDFILELIB)
LIBS=$(LIBS) libsndfile.lib