/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003f1650; name: FUN_003f1650
 */


void FUN_003f1650(uint *param_1,uint param_2,uint param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  uint *puVar3;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = 0;
  puVar3 = param_1 + 4;
  puVar3[0] = 0;
  puVar3[1] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 1;
  *(undefined8 *)(param_1 + 10) = param_4;
  local_38 = 0;
  local_48 = 0;
  local_40 = 0;
  if ((ulong)param_3 * (ulong)param_2 == 0) {
    local_48 = 0;
  }
  else {
                    /* try { // try from 003f1698 to 003f1717 has its CatchHandler @ 003f172c */
    plVar1 = (long *)FUN_00400d30();
    local_48 = (**(code **)(*plVar1 + 0x10))
                         (plVar1,(ulong)param_3 * (ulong)param_2,"NonTrackedAlloc",
                          "./../../Common/src\\CmPreallocatingPool.h",0x3c);
    if (param_1[6] < (param_1[7] & 0x7fffffff)) {
      puVar2 = (undefined8 *)(*(long *)(param_1 + 4) + (ulong)param_1[6] * 0x18);
      puVar2[2] = CONCAT44(uStack_34,local_38);
      puVar2[1] = local_40;
      *puVar2 = local_48;
      param_1[6] = param_1[6] + 1;
      return;
    }
  }
  FUN_003f17c0(puVar3,&local_48);
  return;
}


