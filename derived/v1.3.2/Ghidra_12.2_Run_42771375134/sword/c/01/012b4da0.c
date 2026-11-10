/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012b4da0; name: FUN_012b4da0
 */


void FUN_012b4da0(long *param_1,uint *param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined4 uVar3;
  long lVar4;
  uint *local_40;
  ulong uStack_38;
  undefined8 local_30;
  undefined8 local_28;
  
  if (param_2 == (uint *)0x0) {
    *param_1 = 0;
    uVar3 = 0xffffffff;
    goto LAB_012b4e34;
  }
  local_30 = 0x4000000000;
  local_28 = 0xf424000000000;
  if (param_3 < 5) {
LAB_012b4e1c:
    lVar4 = 0;
    uVar3 = 0xffffffff;
  }
  else {
    uVar1 = *param_2;
    if ((int)uVar1 < 0) goto LAB_012b4e1c;
    lVar4 = 0;
    uVar3 = 0xffffffff;
    if ((uVar1 != 0) && ((ulong)uVar1 <= param_3 - 1)) {
      local_40 = param_2;
      uStack_38 = param_3;
      uVar2 = FUN_012b4e50((long)param_2 + (ulong)uVar1,&local_40);
      if ((uVar2 & 1) == 0) goto LAB_012b4e1c;
      uVar3 = 0;
      lVar4 = (long)param_2 + (ulong)*param_2;
    }
  }
  *param_1 = lVar4;
LAB_012b4e34:
  *(undefined4 *)(param_1 + 1) = uVar3;
  return;
}


