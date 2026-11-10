/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01505da0; name: FUN_01505da0
 */


undefined8 FUN_01505da0(long param_1,uint param_2,uint param_3,long *param_4,uint param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *param_4;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if ((param_2 < 0x20) && (param_3 < 0x1e)) {
    FUN_008664b0(lVar3,param_1 + (ulong)param_2 * 0x2850 + (ulong)param_3 * 0x158 + 0x60);
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  uVar1 = FUN_008787d0(*param_4);
  if (((uVar1 & 1) == 0) &&
     (((param_5 & 1) != 0 || (uVar1 = FUN_0087d610(*param_4,2), (uVar1 & 1) == 0)))) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


