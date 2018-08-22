/********************************************************************
**       This head file is generated by program,                   **
**            Please do not change it directly.                    **
**                   Auther: brinkqiang                            **
********************************************************************/

/*       Version Number: 1_0          */

#ifndef {{UP_PROTO_NAME}}_ERRORCODE_H_INCLUDE_VERSION_1_0
#define {{UP_PROTO_NAME}}_ERRORCODE_H_INCLUDE_VERSION_1_0

#include "dmformat.h"

#ifndef NS{{UP_PROTO_NAME}}_BEGIN
#define NS{{UP_PROTO_NAME}}_BEGIN
#endif

#ifndef NS{{UP_PROTO_NAME}}_NAMESPACE
#define NS{{UP_PROTO_NAME}}_NAMESPACE
#endif

#ifndef NS{{UP_PROTO_NAME}}_END
#define NS{{UP_PROTO_NAME}}_END
#endif

NS{{UP_PROTO_NAME}}_BEGIN

enum E{{UP_PROTO_NAME}}ErrorID
{
{{#ERRORCODE_LIST_ENUM}}    {{ERROR_NAME}}                             = {{ERROR_ID}}     , /// {{ERROR_INFO}} /// {{ERROR_DES}}
{{/ERRORCODE_LIST_ENUM}}};

template<E{{UP_PROTO_NAME}}ErrorID ID> inline const char * Get{{UP_PROTO_NAME}}Error();

inline const char * Get{{UP_PROTO_NAME}}Error(){return "ERR_UNKNOWN";}

{{#ERRORCODE_LIST_GETERROR}}template<> inline const char * Get{{UP_PROTO_NAME}}Error<{{ERROR_NAME}}>(){return "{{ERROR_INFO}}";}
{{/ERRORCODE_LIST_GETERROR}}
inline const char* Get{{UP_PROTO_NAME}}Error(int nError)
{
    switch(nError)
    {
{{#ERRORCODE_LIST_SWITCH}}    case {{ERROR_NAME}}: return Get{{UP_PROTO_NAME}}Error<{{ERROR_NAME}}>();
{{/ERRORCODE_LIST_SWITCH}}    default: break;
    }
    return Get{{UP_PROTO_NAME}}Error();
}

inline std::string Format{{UP_PROTO_NAME}}Error(int nError)
{
    const char* pError = Get{{UP_PROTO_NAME}}Error(nError);
    if (Get{{UP_PROTO_NAME}}Error() == pError){return fmt::format("{0} code={1} params=[]", Get{{UP_PROTO_NAME}}Error(), nError);}
    return fmt::format(Get{{UP_PROTO_NAME}}Error(nError));
}

template<class V0>
inline std::string Format{{UP_PROTO_NAME}}Error(int nError, const V0& p0)
{
    const char* pError = Get{{UP_PROTO_NAME}}Error(nError);
    if (Get{{UP_PROTO_NAME}}Error() == pError){return fmt::format("{0} code={1} params=[{2}]", Get{{UP_PROTO_NAME}}Error(), nError, p0);}
    return fmt::format(Get{{UP_PROTO_NAME}}Error(nError),p0);
}

template<class V0, class V1>
inline std::string Format{{UP_PROTO_NAME}}Error(int nError, const V0& p0, const V1& p1)
{
    const char* pError = Get{{UP_PROTO_NAME}}Error(nError);
    if (Get{{UP_PROTO_NAME}}Error() == pError) {return fmt::format("{0} code={1} params=[{2},{3}]", Get{{UP_PROTO_NAME}}Error(), nError, p0,p1); }
    return fmt::format(Get{{UP_PROTO_NAME}}Error(nError),p0,p1);
}

template<class V0, class V1, class V2>
inline std::string Format{{UP_PROTO_NAME}}Error(int nError, const V0& p0, const V1& p1, const V2& p2)
{
    const char* pError = Get{{UP_PROTO_NAME}}Error(nError);
    if (Get{{UP_PROTO_NAME}}Error() == pError) {return fmt::format("{0} code={1} params=[{2},{3},{4}]", Get{{UP_PROTO_NAME}}Error(), nError, p0,p1,p2); }
    return fmt::format(Get{{UP_PROTO_NAME}}Error(nError),p0,p1,p2);
}

template<class V0, class V1, class V2, class V3>
inline std::string Format{{UP_PROTO_NAME}}Error(int nError, const V0& p0, const V1& p1, const V2& p2, const V3& p3)
{
    const char* pError = Get{{UP_PROTO_NAME}}Error(nError);
    if (Get{{UP_PROTO_NAME}}Error() == pError) {return fmt::format("{0} code={1} params=[{2},{3},{4},{5}]", Get{{UP_PROTO_NAME}}Error(), nError, p0,p1,p2,p3); }
    return fmt::format(Get{{UP_PROTO_NAME}}Error(nError),p0,p1,p2,p3);
}

template<class V0, class V1, class V2, class V3, class V4>
inline std::string Format{{UP_PROTO_NAME}}Error(int nError, const V0& p0, const V1& p1, const V2& p2, const V3& p3, const V4& p4)
{
    const char* pError = Get{{UP_PROTO_NAME}}Error(nError);
    if (Get{{UP_PROTO_NAME}}Error() == pError) {return fmt::format("{0} code={1} params=[{2},{3},{4},{5},{6}]", Get{{UP_PROTO_NAME}}Error(), nError, p0,p1,p2,p3,p4); }
    return fmt::format(Get{{UP_PROTO_NAME}}Error(nError),p0,p1,p2,p3,p4);
}

template<class V0, class V1, class V2, class V3, class V4, class V5>
inline std::string Format{{UP_PROTO_NAME}}Error(int nError, const V0& p0, const V1& p1, const V2& p2, const V3& p3, const V4& p4, const V5& p5)
{
    const char* pError = Get{{UP_PROTO_NAME}}Error(nError);
    if (Get{{UP_PROTO_NAME}}Error() == pError) {return fmt::format("{0} code={1} params=[{2},{3},{4},{5},{6},{7}]", Get{{UP_PROTO_NAME}}Error(), nError, p0,p1,p2,p3,p4,p5); }
    return fmt::format(Get{{UP_PROTO_NAME}}Error(nError),p0,p1,p2,p3,p4,p5);
}

template<class V0, class V1, class V2, class V3, class V4, class V5, class V6>
inline std::string Format{{UP_PROTO_NAME}}Error(int nError, const V0& p0, const V1& p1, const V2& p2, const V3& p3, const V4& p4, const V5& p5, const V6& p6)
{
    const char* pError = Get{{UP_PROTO_NAME}}Error(nError);
    if (Get{{UP_PROTO_NAME}}Error() == pError) {return fmt::format("{0} code={1} params=[{2},{3},{4},{5},{6},{7},{8}]", Get{{UP_PROTO_NAME}}Error(), nError, p0,p1,p2,p3,p4,p5,p6); }
    return fmt::format(Get{{UP_PROTO_NAME}}Error(nError),p0,p1,p2,p3,p4,p5,p6);
}

template<class V0, class V1, class V2, class V3, class V4, class V5, class V6, class V7>
inline std::string Format{{UP_PROTO_NAME}}Error(int nError, const V0& p0, const V1& p1, const V2& p2, const V3& p3, const V4& p4, const V5& p5, const V6& p6, const V7& p7)
{
    const char* pError = Get{{UP_PROTO_NAME}}Error(nError);
    if (Get{{UP_PROTO_NAME}}Error() == pError) {return fmt::format("{0} code={1} params=[{2},{3},{4},{5},{6},{7},{8},{9}]", Get{{UP_PROTO_NAME}}Error(), nError, p0,p1,p2,p3,p4,p5,p6,p7); }
    return fmt::format(Get{{UP_PROTO_NAME}}Error(nError),p0,p1,p2,p3,p4,p5,p6,p7);
}

template<class V0, class V1, class V2, class V3, class V4, class V5, class V6, class V7, class V8>
inline std::string Format{{UP_PROTO_NAME}}Error(int nError, const V0& p0, const V1& p1, const V2& p2, const V3& p3, const V4& p4, const V5& p5, const V6& p6, const V7& p7, const V8& p8)
{
    const char* pError = Get{{UP_PROTO_NAME}}Error(nError);
    if (Get{{UP_PROTO_NAME}}Error() == pError) {return fmt::format("{0} code={1} params=[{2},{3},{4},{5},{6},{7},{8},{9},{10}]", Get{{UP_PROTO_NAME}}Error(), nError, p0,p1,p2,p3,p4,p5,p6,p7,p8); }
    return fmt::format(Get{{UP_PROTO_NAME}}Error(nError),p0,p1,p2,p3,p4,p5,p6,p7,p8);
}

template<class V0, class V1, class V2, class V3, class V4, class V5, class V6, class V7, class V8, class V9>
inline std::string Format{{UP_PROTO_NAME}}Error(int nError, const V0& p0, const V1& p1, const V2& p2, const V3& p3, const V4& p4, const V5& p5, const V6& p6, const V7& p7, const V8& p8, const V9& p9)
{
    const char* pError = Get{{UP_PROTO_NAME}}Error(nError);
    if (Get{{UP_PROTO_NAME}}Error() == pError) {return fmt::format("{0} code={1} params=[{2},{3},{4},{5},{6},{7},{8},{9},{10},{11}]", Get{{UP_PROTO_NAME}}Error(), nError, p0,p1,p2,p3,p4,p5,p6,p7,p8,p9); }
    return fmt::format(Get{{UP_PROTO_NAME}}Error(nError),p0,p1,p2,p3,p4,p5,p6,p7,p8,p9);
}

NS{{UP_PROTO_NAME}}_END
#endif
