/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008c6ab0; name: FUN_008c6ab0
 */


void FUN_008c6ab0(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_DAT_02717ad8;
  lVar3 = param_1 + 0x100;
  if ((param_2 & 1) == 0) {
    lVar4 = FUN_00ffdb00(lVar3,PTR_DAT_02717ad8);
    puVar1 = PTR_DAT_02717ad0;
    *(undefined8 *)(lVar4 + 0xe0) = *(undefined8 *)(PTR_DAT_02717ad0 + 0x60);
    lVar4 = FUN_00ffdb00(lVar3,puVar2 + 8);
    *(undefined8 *)(lVar4 + 0xe0) = *(undefined8 *)(puVar1 + 0xe8);
    lVar4 = FUN_00ffdb00(lVar3,puVar2 + 0x10);
    *(undefined8 *)(lVar4 + 0xe0) = *(undefined8 *)(puVar1 + 0x170);
    lVar4 = FUN_00ffdb00(lVar3,puVar2 + 0x18);
    *(undefined8 *)(lVar4 + 0xe0) = *(undefined8 *)(puVar1 + 0x1f8);
    lVar4 = FUN_00ffdb00(lVar3,puVar2 + 0x20);
    *(undefined8 *)(lVar4 + 0xe0) = *(undefined8 *)(puVar1 + 0x280);
    lVar4 = FUN_00ffdb00(lVar3,puVar2 + 0x28);
    *(undefined8 *)(lVar4 + 0xe0) = *(undefined8 *)(puVar1 + 0x308);
    lVar4 = FUN_00ffdb00(lVar3,puVar2 + 0x30);
    *(undefined8 *)(lVar4 + 0xe0) = *(undefined8 *)(puVar1 + 0x390);
    lVar4 = FUN_00ffdb00(lVar3,puVar2 + 0x38);
    *(undefined8 *)(lVar4 + 0xe0) = *(undefined8 *)(puVar1 + 0x418);
    lVar4 = FUN_00ffdb00(lVar3,puVar2 + 0x40);
    *(undefined8 *)(lVar4 + 0xe0) = *(undefined8 *)(puVar1 + 0x4a0);
    lVar3 = FUN_00ffdb00(lVar3,puVar2 + 0x48);
    uVar5 = *(undefined8 *)(puVar1 + 0x528);
  }
  else {
    lVar3 = FUN_00ffdb00(lVar3,PTR_DAT_02717ad8 + (ulong)*(uint *)(param_1 + 0x73c) * 8);
    uVar5 = 0xcbf29ce484222645;
  }
  *(undefined8 *)(lVar3 + 0xe0) = uVar5;
  return;
}


