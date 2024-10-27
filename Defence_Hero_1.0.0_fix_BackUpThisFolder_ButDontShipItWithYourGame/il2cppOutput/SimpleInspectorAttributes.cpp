#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// DanielLochner.Assets.Margins
struct Margins_t8DDEFA2068F938441A8F739E62815DC0F232C8A0;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t60EAFE652EEB50BDF688CDE94F4F4EE5CBE9074E 
{
};
struct Il2CppArrayBounds;

// DanielLochner.Assets.Margins
struct Margins_t8DDEFA2068F938441A8F739E62815DC0F232C8A0  : public RuntimeObject
{
	// System.Single DanielLochner.Assets.Margins::Left
	float ___Left_0;
	// System.Single DanielLochner.Assets.Margins::Right
	float ___Right_1;
	// System.Single DanielLochner.Assets.Margins::Top
	float ___Top_2;
	// System.Single DanielLochner.Assets.Margins::Bottom
	float ___Bottom_3;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// DanielLochner.Assets.MinMax
struct MinMax_tA889633E68F715FD812EAC9E01B6FC6981B38091 
{
	// System.Single DanielLochner.Assets.MinMax::min
	float ___min_0;
	// System.Single DanielLochner.Assets.MinMax::max
	float ___max_1;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void DanielLochner.Assets.MinMax::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMax__ctor_m171D381310DBC66F3F052D87CDE5BE93DA4330E4 (MinMax_tA889633E68F715FD812EAC9E01B6FC6981B38091* __this, float ___min0, float ___max1, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DanielLochner.Assets.Margins::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Margins__ctor_mD0360F7BD9BF5F1E252A17EF761AD750F645041E (Margins_t8DDEFA2068F938441A8F739E62815DC0F232C8A0* __this, float ___m0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// public Margins(float m)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Left = Right = Top = Bottom = m;
		float L_0 = ___m0;
		float L_1 = L_0;
		V_0 = L_1;
		__this->___Bottom_3 = L_1;
		float L_2 = V_0;
		float L_3 = L_2;
		V_0 = L_3;
		__this->___Top_2 = L_3;
		float L_4 = V_0;
		float L_5 = L_4;
		V_0 = L_5;
		__this->___Right_1 = L_5;
		float L_6 = V_0;
		__this->___Left_0 = L_6;
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.Margins::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Margins__ctor_m415D42A7BB34913948B5F9953189B0C97C94F595 (Margins_t8DDEFA2068F938441A8F739E62815DC0F232C8A0* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// public Margins(float x, float y)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Left = Right = x;
		float L_0 = ___x0;
		float L_1 = L_0;
		V_0 = L_1;
		__this->___Right_1 = L_1;
		float L_2 = V_0;
		__this->___Left_0 = L_2;
		// Top = Bottom = y;
		float L_3 = ___y1;
		float L_4 = L_3;
		V_0 = L_4;
		__this->___Bottom_3 = L_4;
		float L_5 = V_0;
		__this->___Top_2 = L_5;
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.Margins::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Margins__ctor_mCCDA245F3561874FFFF63E617144E7052AC0F8FD (Margins_t8DDEFA2068F938441A8F739E62815DC0F232C8A0* __this, float ___l0, float ___r1, float ___t2, float ___b3, const RuntimeMethod* method) 
{
	{
		// public Margins(float l, float r, float t, float b)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Left = l;
		float L_0 = ___l0;
		__this->___Left_0 = L_0;
		// Right = r;
		float L_1 = ___r1;
		__this->___Right_1 = L_1;
		// Top = t;
		float L_2 = ___t2;
		__this->___Top_2 = L_2;
		// Bottom = b;
		float L_3 = ___b3;
		__this->___Bottom_3 = L_3;
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DanielLochner.Assets.MinMax::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMax__ctor_m171D381310DBC66F3F052D87CDE5BE93DA4330E4 (MinMax_tA889633E68F715FD812EAC9E01B6FC6981B38091* __this, float ___min0, float ___max1, const RuntimeMethod* method) 
{
	{
		// this.min = min;
		float L_0 = ___min0;
		__this->___min_0 = L_0;
		// this.max = max;
		float L_1 = ___max1;
		__this->___max_1 = L_1;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void MinMax__ctor_m171D381310DBC66F3F052D87CDE5BE93DA4330E4_AdjustorThunk (RuntimeObject* __this, float ___min0, float ___max1, const RuntimeMethod* method)
{
	MinMax_tA889633E68F715FD812EAC9E01B6FC6981B38091* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MinMax_tA889633E68F715FD812EAC9E01B6FC6981B38091*>(__this + _offset);
	MinMax__ctor_m171D381310DBC66F3F052D87CDE5BE93DA4330E4(_thisAdjusted, ___min0, ___max1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
