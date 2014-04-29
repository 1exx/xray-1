#pragma once
#include "../state.h"

template<typename _Object>
class CStateMonsterRestWalkGraph : public CState<_Object> {
	typedef CState<_Object> inherited;

public:
						CStateMonsterRestWalkGraph	(_Object *obj);
	virtual				~CStateMonsterRestWalkGraph	();

	virtual	void		execute					();
};

#include "monster_state_rest_walk_graph_inline.h"
