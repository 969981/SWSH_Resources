/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0136df80; name: FUN_0136df80
 */


void FUN_0136df80(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = *(undefined8 **)(param_1 + 0xb8);
  if (puVar1 == *(undefined8 **)(param_1 + 0xc0)) {
    FUN_0136ec70(param_1 + 0xb0,param_2);
    return;
  }
  uVar5 = *(undefined8 *)(param_1 + 200);
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar5;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  if ((code *)param_2[2] != (code *)0x0) {
    (*(code *)param_2[2])(param_2 + 4,puVar1 + 4);
    uVar5 = *param_2;
    uVar2 = param_2[1];
    uVar3 = param_2[3];
    puVar1[2] = param_2[2];
    puVar1[3] = uVar3;
    *puVar1 = uVar5;
    puVar1[1] = uVar2;
  }
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb8) + 0x80;
  return;
}


