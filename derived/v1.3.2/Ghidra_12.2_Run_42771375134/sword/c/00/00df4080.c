/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00df4080; name: FUN_00df4080
 */


void FUN_00df4080(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 local_60;
  undefined2 local_5c;
  undefined4 local_58;
  undefined2 local_54;
  undefined8 local_50;
  undefined4 local_48;
  
  lVar3 = *(long *)(param_1 + 0x70);
  uVar1 = FUN_015772a0(lVar3 + 0x50);
  if ((uVar1 & 1) == 0) {
    lVar3 = 0;
  }
  local_50 = 0;
  local_48 = 0xffffffff;
  local_54 = 0;
  local_60 = FUN_00eaa240(lVar3);
  local_5c = FUN_00eaa250(lVar3);
  local_58 = *(undefined4 *)(lVar3 + 0x5d4);
  plVar4 = *(long **)(param_1 + 8);
  uVar5 = *(undefined8 *)(*(long *)PTR_DAT_0271e8d0 + 0x1e8);
  plVar2 = (long *)(**(code **)(*plVar4 + 0x10))(plVar4,0x140,0x10);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar4;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  FUN_0131a840(plVar2,uVar5);
  plVar2[0x26] = 0;
  *plVar2 = (long)(PTR_DAT_0271edf8 + 0x10);
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  puVar6 = *(undefined8 **)(param_1 + 0xe8);
  *(long **)(param_1 + 0xe8) = plVar2;
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)(puVar6);
    (**(code **)(**(long **)(param_1 + 0xf0) + 0x18))
              (*(long **)(param_1 + 0xf0),puVar6,*(undefined8 *)(param_1 + 0xf8),
               *(undefined8 *)(param_1 + 0x100));
    plVar2 = *(long **)(param_1 + 0xe8);
  }
  *(long **)(param_1 + 0xf0) = plVar4;
  *(undefined8 *)(param_1 + 0xf8) = 0x140;
  *(undefined8 *)(param_1 + 0x100) = 0x10;
  FUN_0131aaf0(plVar2,&local_60);
  return;
}


