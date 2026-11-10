/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003c0850; name: FUN_003c0850
 */


void FUN_003c0850(long param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((*(ushort *)(param_1 + 0xb4) >> 2 & 1) != 0) {
    lVar5 = *(long *)(param_1 + 0x50);
    *(ushort *)(param_1 + 0xb4) = *(ushort *)(param_1 + 0xb4) & 63999;
    FUN_003be9f0(lVar5,1);
    puVar3 = *(undefined8 **)(lVar5 + 0xb0);
    lVar5 = *(long *)(param_1 + 0x50);
    uVar4 = puVar3[2];
    uVar1 = puVar3[1];
    uVar2 = *(undefined4 *)(puVar3 + 3);
    *(undefined8 *)(lVar5 + 0x10) = *puVar3;
    *(undefined8 *)(lVar5 + 0x18) = uVar1;
    *(undefined8 *)(lVar5 + 0x20) = uVar4;
    *(undefined4 *)(lVar5 + 0x28) = uVar2;
  }
  return;
}


