/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01312010; name: FUN_01312010
 */


void FUN_01312010(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = *(undefined8 **)(param_1 + 0x68);
  if (*(undefined8 **)(param_1 + 0x70) <= puVar1) {
    FUN_01312ad0(param_1 + 0x60,param_2,param_3);
    return;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x78);
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar5;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  uVar5 = param_2[1];
  *puVar1 = *param_2;
  puVar1[1] = uVar5;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  if ((code *)param_3[2] != (code *)0x0) {
    (*(code *)param_3[2])(param_3 + 4,puVar1 + 6);
    uVar5 = *param_3;
    uVar2 = param_3[1];
    uVar3 = param_3[3];
    puVar1[4] = param_3[2];
    puVar1[5] = uVar3;
    puVar1[2] = uVar5;
    puVar1[3] = uVar2;
  }
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + 0x90;
  return;
}


