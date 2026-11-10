/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a92b10; name: FUN_00a92b10
 */


void FUN_00a92b10(long param_1,ulong param_2)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  undefined *local_140;
  long local_138;
  undefined8 local_130;
  code *local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [96];
  undefined8 local_b0;
  code *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [96];
  
  if (*(char *)(param_1 + 0x81) != '\0') {
    if ((param_2 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0xd0);
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0xd8);
      *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0xe0);
      *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0xe8);
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0xf4);
      puVar2 = PTR_FloatDegree180_027194f0;
      *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0xf8);
      fVar4 = *(float *)puVar2;
      fVar5 = *(float *)PTR_FloatPi_02715160;
      *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0xfc) * (fVar4 / fVar5);
      *(float *)(param_1 + 0x50) = (fVar4 / fVar5) * *(float *)(param_1 + 0xf0);
    }
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    local_a8 = (code *)0x0;
    local_138 = 0;
    local_120 = 0;
    uStack_118 = 0;
    local_130 = 0;
    local_128 = (code *)0x0;
    local_140 = PTR_DAT_02715040 + 0x10;
    FUN_006989e0(*(long *)(param_1 + 0x20) + 0x80,&local_140);
    *(undefined2 *)(param_1 + 0x80) = 1;
    local_140 = PTR_DAT_02710a48 + 0x10;
    if (local_138 == 0) {
      local_138 = 0;
      pcVar1 = local_a8;
    }
    else {
      FUN_006e2100(local_138,&local_140);
      lVar3 = local_138;
      local_138 = 0;
      pcVar1 = local_a8;
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
        pcVar1 = local_a8;
      }
    }
    local_a8 = pcVar1;
    if (pcVar1 != (code *)0x0) {
      local_a0 = 0;
      uStack_98 = 0;
      local_b0 = 0;
      local_a8 = (code *)0x0;
      (*pcVar1)(auStack_90);
    }
    pcVar1 = local_128;
    if (local_128 != (code *)0x0) {
      local_120 = 0;
      uStack_118 = 0;
      local_130 = 0;
      local_128 = (code *)0x0;
      (*pcVar1)(auStack_110);
    }
    if (local_138 != 0) {
      (**(code **)(*(long *)(local_138 + 0x48) + 0x18))();
    }
  }
  return;
}


