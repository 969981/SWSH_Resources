/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01550600; name: FUN_01550600
 */


void FUN_01550600(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 local_3248 [12800];
  undefined1 auStack_48 [8];
  undefined8 local_40;
  undefined4 local_34;
  undefined1 *local_28;
  
  puVar3 = local_3248;
  do {
    uVar1 = FUN_008d3750();
    *(undefined2 *)(puVar3 + 0x1a) = 0;
    *puVar3 = uVar1;
    *(undefined8 *)(puVar3 + 0x12) = 0;
    *(undefined8 *)(puVar3 + 10) = 0;
    *(undefined8 *)(puVar3 + 2) = 0;
    *(undefined2 *)(puVar3 + 0x30) = 0;
    *(undefined4 *)(puVar3 + 0x58) = 0;
    *(undefined8 *)(puVar3 + 0x20) = 0;
    *(undefined8 *)(puVar3 + 0x28) = 0;
    *(undefined8 *)(puVar3 + 0x48) = 0;
    *(undefined8 *)(puVar3 + 0x50) = 0;
    *(undefined8 *)(puVar3 + 0x38) = 0;
    *(undefined8 *)(puVar3 + 0x40) = 0;
    *(undefined8 *)(puVar3 + 0x60) = 0;
    *(undefined8 *)(puVar3 + 0x68) = 0;
    *(undefined8 *)(puVar3 + 0x70) = 0;
    *(undefined8 *)(puVar3 + 0x78) = 0;
    puVar3 = puVar3 + 0x80;
  } while (puVar3 != auStack_48);
  local_28 = local_3248;
  auStack_48[0] = 0;
  local_34 = 0;
  uVar2 = FUN_0153bf80(*(undefined8 *)PTR_DAT_02710798,&local_34);
  local_40 = 0x3208;
  FUN_01550440(uVar2,&DAT_0217312c,&local_28,&local_40);
  return;
}


