/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00618650; name: FUN_00618650
 */


undefined8 FUN_00618650(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  uint uVar4;
  uint *puVar5;
  
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  lVar1 = *(long *)(param_1 + 0x38);
  if (lVar1 == 0) {
    return 0xfffffffe;
  }
  pcVar3 = *(code **)(param_1 + 0x48);
  if (pcVar3 == (code *)0x0) {
    return 0xfffffffe;
  }
  puVar5 = *(uint **)(lVar1 + 0x20);
  if (puVar5 != (uint *)0x0) {
    uVar4 = *puVar5;
    if ((uVar4 & 0xfffffffe) == 4) {
      (*pcVar3)(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(puVar5 + 4));
      uVar4 = *puVar5;
    }
    if (uVar4 == 6) {
      (**(code **)(param_1 + 0x48))(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(puVar5 + 2));
    }
    uVar2 = *(undefined8 *)(puVar5 + 0x10);
    *puVar5 = 0;
    puVar5[0xb] = 0;
    puVar5[0xc] = 0;
    puVar5[0xd] = 0;
    *(undefined8 *)(puVar5 + 0x14) = uVar2;
    *(undefined8 *)(puVar5 + 0x16) = uVar2;
    if (*(code **)(puVar5 + 0x18) != (code *)0x0) {
      uVar2 = (**(code **)(puVar5 + 0x18))(0,0,0);
      *(undefined8 *)(puVar5 + 0x1a) = uVar2;
      *(undefined8 *)(param_1 + 0x60) = uVar2;
      uVar2 = *(undefined8 *)(puVar5 + 0x10);
    }
    (**(code **)(param_1 + 0x48))(*(undefined8 *)(param_1 + 0x50),uVar2);
    (**(code **)(param_1 + 0x48))(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(puVar5 + 0xe));
    (**(code **)(param_1 + 0x48))(*(undefined8 *)(param_1 + 0x50),puVar5);
    pcVar3 = *(code **)(param_1 + 0x48);
    lVar1 = *(long *)(param_1 + 0x38);
  }
  (*pcVar3)(*(undefined8 *)(param_1 + 0x50),lVar1);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 0;
}


