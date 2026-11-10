/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007c5190; name: FUN_007c5190
 */


void FUN_007c5190(long *param_1,long *param_2,ulong *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  puVar1 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x60,0x10);
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
LAB_007c52f8:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_2;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  uVar5 = *param_3;
  *puVar1 = *param_4;
  puVar1[1] = param_4[1];
  plVar3 = (long *)param_4[6];
  if (plVar3 == (long *)0x0) {
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[8] = 0;
  }
  else if (param_4 + 2 == plVar3) {
    puVar1[6] = puVar1 + 2;
    (**(code **)(*(long *)param_4[6] + 0x18))();
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[8] = 0;
  }
  else {
    uVar4 = (**(code **)(*plVar3 + 0x10))();
    puVar1[6] = uVar4;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[8] = 0;
  }
  if (uVar5 != 0) {
    if ((ulong)puVar1[1] < uVar5) goto LAB_007c52f8;
    uVar4 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar5 * 0x180,8);
    FUN_007c5770(puVar1,uVar4,uVar5,puVar1[8] + puVar1[9] * 0x180,0,0);
  }
  *param_1 = (long)puVar1;
  param_1[1] = (long)param_2;
  param_1[2] = 0x60;
  param_1[3] = 0x10;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  return;
}


