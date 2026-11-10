/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e06250; name: FUN_00e06250
 */


undefined8 FUN_00e06250(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auStack_2d0 [572];
  undefined4 local_94;
  int *local_90;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_74;
  
  lVar5 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  local_84 = param_4;
  local_80 = param_3;
  local_74 = param_2;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  puVar3 = *(uint **)(*(long *)(lVar5 + 0x2a8) + 400);
  piVar1 = (int *)((long)puVar3 + (ulong)*puVar3);
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
     (uVar4 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar4 == 0)) {
    local_90 = (int *)0x0;
    iVar2 = iRam0000000000000000;
  }
  else {
    puVar3 = (uint *)((long)piVar1 + uVar4);
    local_90 = (int *)((long)puVar3 + (ulong)*puVar3);
    iVar2 = *local_90;
  }
  if (iVar2 != 0) {
    local_94 = 0;
                    /* WARNING: Subroutine does not return */
    memset(auStack_2d0,0,0x236);
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  return 0;
}


