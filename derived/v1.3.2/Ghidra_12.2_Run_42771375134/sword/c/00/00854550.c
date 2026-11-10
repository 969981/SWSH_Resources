/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00854550; name: FUN_00854550
 */


void FUN_00854550(long param_1)

{
  undefined *puVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  puVar1 = PTR_DAT_02716d10;
  pbVar2 = *(byte **)PTR_DAT_02716d10;
  pbVar3 = *(byte **)(param_1 + 0x38);
  if (pbVar3 != pbVar2 && pbVar3 != (byte *)0x0) {
    if ((*pbVar3 & 1) != 0) {
      operator_delete(*(void **)(pbVar3 + 0x10));
    }
    operator_delete(pbVar3);
    pbVar2 = *(byte **)puVar1;
  }
  pbVar3 = *(byte **)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (pbVar3 != pbVar2 && pbVar3 != (byte *)0x0) {
    if ((*pbVar3 & 1) != 0) {
      operator_delete(*(void **)(pbVar3 + 0x10));
    }
    operator_delete(pbVar3);
    pbVar2 = *(byte **)puVar1;
  }
  pbVar3 = *(byte **)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (pbVar3 != pbVar2 && pbVar3 != (byte *)0x0) {
    if ((*pbVar3 & 1) != 0) {
      operator_delete(*(void **)(pbVar3 + 0x10));
    }
    operator_delete(pbVar3);
    pbVar2 = *(byte **)puVar1;
  }
  pbVar3 = *(byte **)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (pbVar3 != pbVar2 && pbVar3 != (byte *)0x0) {
    if ((*pbVar3 & 1) != 0) {
      operator_delete(*(void **)(pbVar3 + 0x10));
    }
    operator_delete(pbVar3);
    pbVar2 = *(byte **)puVar1;
  }
  pbVar3 = *(byte **)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = 0;
  if ((pbVar3 != pbVar2) && (pbVar3 != (byte *)0x0)) {
    if ((*pbVar3 & 1) != 0) {
      operator_delete(*(void **)(pbVar3 + 0x10));
    }
    operator_delete(pbVar3);
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  return;
}


