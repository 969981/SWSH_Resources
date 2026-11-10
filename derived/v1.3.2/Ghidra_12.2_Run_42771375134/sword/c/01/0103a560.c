/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0103a560; name: FUN_0103a560
 */


void FUN_0103a560(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  
  puVar1 = PTR_DAT_02718d60 + 0xb8;
  puVar2 = PTR_DAT_02718d60 + 0xf8;
  *param_1 = (long)(PTR_DAT_02718d60 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  if (param_1[0x11c] != 0) {
    (**(code **)(*(long *)(param_1[0x11c] + 0x48) + 0x18))();
    param_1[0x11c] = 0;
  }
  if (param_1[0x118] != 0) {
    (**(code **)(*(long *)(param_1[0x118] + 0x48) + 0x18))();
    param_1[0x118] = 0;
  }
  if (param_1[0x114] != 0) {
    (**(code **)(*(long *)(param_1[0x114] + 0x48) + 0x18))();
    param_1[0x114] = 0;
  }
  if (param_1[0x10e] != 0) {
    (**(code **)(*(long *)(param_1[0x10e] + 0x48) + 0x18))();
    param_1[0x10e] = 0;
  }
  pcVar3 = (code *)param_1[0xff];
  if (pcVar3 != (code *)0x0) {
    param_1[0x101] = 0;
    param_1[0x100] = 0;
    param_1[0xff] = 0;
    param_1[0xfe] = 0;
    (*pcVar3)(param_1 + 0x102);
  }
  pcVar3 = (code *)param_1[0xef];
  if (pcVar3 != (code *)0x0) {
    param_1[0xf1] = 0;
    param_1[0xf0] = 0;
    param_1[0xef] = 0;
    param_1[0xee] = 0;
    (*pcVar3)(param_1 + 0xf2);
  }
  pcVar3 = (code *)param_1[0xdf];
  if (pcVar3 != (code *)0x0) {
    param_1[0xe1] = 0;
    param_1[0xe0] = 0;
    param_1[0xdf] = 0;
    param_1[0xde] = 0;
    (*pcVar3)(param_1 + 0xe2);
  }
  if (param_1[0xd7] != 0) {
    (**(code **)(*(long *)(param_1[0xd7] + 0x48) + 0x18))();
    param_1[0xd7] = 0;
  }
  if (param_1[0xd6] != 0) {
    (**(code **)(*(long *)(param_1[0xd6] + 0x48) + 0x18))();
    param_1[0xd6] = 0;
  }
  pcVar3 = (code *)param_1[0xbb];
  if (pcVar3 != (code *)0x0) {
    param_1[0xbd] = 0;
    param_1[0xbc] = 0;
    param_1[0xbb] = 0;
    param_1[0xba] = 0;
    (*pcVar3)(param_1 + 0xbe);
  }
  FUN_00ff9a90(param_1);
  return;
}


