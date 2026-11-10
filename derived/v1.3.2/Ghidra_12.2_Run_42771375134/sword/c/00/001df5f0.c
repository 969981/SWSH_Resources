/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001df5f0; name: FUN_001df5f0
 */


void FUN_001df5f0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long local_40;
  byte local_38 [8];
  
  *(undefined8 *)(param_1 + 0x58) = param_2;
  *(undefined8 *)(param_1 + 0x68) = *param_3;
  *(undefined8 *)(param_1 + 0x60) = param_3[1];
  *(undefined8 *)(param_1 + 0x70) = param_3[2];
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 == 0) {
    bVar2 = false;
    lVar5 = *(long *)(param_1 + 0x18);
  }
  else {
    lVar6 = *(long *)(PTR_DAT_02711080 + (ulong)*(ushort *)(lVar5 + 8) * 8);
    iVar3 = FUN_001e1220(lVar5 + lVar6,0,param_1);
    bVar2 = false;
    if (iVar3 == -1) {
      FUN_001e1290(lVar5 + lVar6,0,param_1,
                   "PxConstraint: Add to rigid actor 0: Constraint already added");
      bVar2 = true;
      lVar5 = *(long *)(param_1 + 0x18);
    }
    else {
      lVar5 = *(long *)(param_1 + 0x18);
    }
  }
  if (lVar5 != 0) {
    lVar6 = *(long *)(PTR_DAT_02711080 + (ulong)*(ushort *)(lVar5 + 8) * 8);
    iVar3 = FUN_001e1220(lVar5 + lVar6,0,param_1);
    if (iVar3 == -1) {
      FUN_001e1290(lVar5 + lVar6,0,param_1,
                   "PxConstraint: Add to rigid actor 1: Constraint already added");
      plVar4 = *(long **)(param_1 + 0x10);
      plVar1 = *(long **)(param_1 + 0x18);
      goto joined_r0x001df6f4;
    }
  }
  if (!bVar2) {
    return;
  }
  plVar4 = *(long **)(param_1 + 0x10);
  plVar1 = *(long **)(param_1 + 0x18);
joined_r0x001df6f4:
  if ((plVar4 == (long *)0x0) ||
     ((**(code **)(*plVar4 + 0x68))(&local_40,plVar4), ((byte)local_40 >> 3 & 1) != 0)) {
    lVar5 = 0;
  }
  else {
    lVar5 = (**(code **)(*plVar4 + 0x38))(plVar4);
  }
  if ((plVar1 == (long *)0x0) ||
     ((**(code **)(*plVar1 + 0x68))(local_38,plVar1), (local_38[0] >> 3 & 1) != 0)) {
    lVar6 = 0;
  }
  else {
    lVar6 = (**(code **)(*plVar1 + 0x38))(plVar1);
  }
  if ((plVar4 == (long *)0x0) || (lVar5 != 0)) {
    if (lVar5 == 0) {
      lVar5 = lVar6;
    }
    if (lVar6 == 0 && plVar1 != (long *)0x0) {
      lVar5 = 0;
    }
  }
  if (((*(uint *)(param_1 + 0x28) >> 0x1e) - 1 < 2) && (*(long *)(param_1 + 0x20) != 0)) {
    lVar6 = FUN_001cc920();
    if (lVar6 == lVar5) {
      return;
    }
  }
  else {
    lVar6 = 0;
    if (lVar5 == 0) {
      return;
    }
  }
  if (lVar6 != 0) {
    local_40 = param_1;
    FUN_001e08f0(lVar6 + 0x25b0,&local_40);
    FUN_001ce480(lVar6 + 0x10,param_1 + 0x20);
  }
  if (lVar5 != 0) {
    local_40 = param_1;
    plVar4 = (long *)FUN_001e0a50(lVar5 + 0x25b0,&local_40,local_38);
    if (local_38[0] == 0) {
      *plVar4 = local_40;
    }
    FUN_001ce320(lVar5 + 0x10,param_1 + 0x20);
  }
  return;
}


