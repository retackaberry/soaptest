#include "soapH.h"
#include "calc.nsmap"

const char server[] = "http://websrv.cs.fsu.edu/~engelen/calcserver.cgi";

int main(int argc, char **argv)
{
  struct soap soap;
  double a, b, result;


  soap_init1(&soap, SOAP_XML_INDENT);

  a = 5.0;
  b = 6.0;

    soap_call_ns2__add(&soap, server, "", a, b, &result);

    printf("result = %g\n", result);

  soap_destroy(&soap);
  soap_end(&soap);
  soap_done(&soap);

  return 0;
}
