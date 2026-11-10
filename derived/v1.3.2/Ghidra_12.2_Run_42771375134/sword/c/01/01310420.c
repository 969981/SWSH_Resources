/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01310420; name: FUN_01310420
 */


void FUN_01310420(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  uVar3 = FUN_012ecf10(param_1 + 0x180,0);
  if ((uVar3 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x01310500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*param_2)(param_2 + 4);
    return;
  }
  puVar5 = *(undefined8 **)(param_1 + 0x218);
  if (puVar5 == *(undefined8 **)(param_1 + 0x220)) {
    FUN_012c74e0(param_1 + 0x210,param_2);
    return;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x228);
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar6;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  puVar5[2] = 0;
  puVar5[3] = 0;
  *puVar5 = 0;
  puVar5[1] = 0;
  if ((code *)param_2[2] != (code *)0x0) {
    (*(code *)param_2[2])(param_2 + 4,puVar5 + 4);
    uVar6 = *param_2;
    uVar1 = param_2[1];
    uVar2 = param_2[3];
    puVar5[2] = param_2[2];
    puVar5[3] = uVar2;
    *puVar5 = uVar6;
    puVar5[1] = uVar1;
  }
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  *(long *)(param_1 + 0x218) = *(long *)(param_1 + 0x218) + 0x80;
  return;
}


