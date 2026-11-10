/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006977d0; name: FUN_006977d0
 */


void FUN_006977d0(long *param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  puVar4 = (undefined8 *)(param_2 + 0x30);
  lVar1 = (**(code **)(*(long *)*puVar4 + 0x10))((long *)*puVar4,0x58,8);
  if (lVar1 == 0) {
    (**(code **)(*(long *)*puVar4 + 0xb8))();
  }
  *param_1 = lVar1;
  param_1[1] = (long)puVar4;
  *(undefined1 *)(param_1 + 2) = 0;
  uVar5 = *puVar4;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar5;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  *(undefined8 *)(lVar1 + 0x10) = *param_4;
  *(undefined8 *)(lVar1 + 0x18) = param_4[1];
  *(undefined8 *)(lVar1 + 0x20) = param_4[2];
  lVar3 = param_4[3];
  *(long *)(lVar1 + 0x28) = lVar3;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  *(undefined8 *)(lVar1 + 0x30) = *param_5;
  *(undefined8 *)(lVar1 + 0x38) = param_5[1];
  *(undefined8 *)(lVar1 + 0x40) = param_5[2];
  *(undefined8 *)(lVar1 + 0x48) = param_5[3];
  lVar3 = param_5[4];
  *(long *)(lVar1 + 0x50) = lVar3;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  *(undefined1 *)(param_1 + 2) = 1;
  puVar4 = (undefined8 *)*param_1;
  *puVar4 = 0;
  puVar4[1] = param_3;
  return;
}


