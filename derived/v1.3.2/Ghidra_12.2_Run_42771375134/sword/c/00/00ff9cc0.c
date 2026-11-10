/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ff9cc0; name: FUN_00ff9cc0
 */


void FUN_00ff9cc0(long *param_1)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  
  lVar1 = param_1[0x8e];
  *param_1 = (long)(PTR_DAT_027233c0 + 0x10);
  param_1[0x8e] = 0;
  if (lVar1 != 0) {
    FUN_00ffaed0(param_1 + 0x8f);
  }
  lVar1 = param_1[0x8a];
  param_1[0x8a] = 0;
  if (lVar1 != 0) {
    FUN_00ffaed0(param_1 + 0x8b);
  }
  if (param_1[0x88] != 0) {
    (**(code **)(*(long *)(param_1[0x88] + 0x48) + 0x18))();
    param_1[0x88] = 0;
  }
  if (param_1[0x87] != 0) {
    (**(code **)(*(long *)(param_1[0x87] + 0x48) + 0x18))();
    param_1[0x87] = 0;
  }
  if (param_1[0x86] != 0) {
    (**(code **)(*(long *)(param_1[0x86] + 0x48) + 0x18))();
    param_1[0x86] = 0;
  }
  if (param_1[0x85] != 0) {
    (**(code **)(*(long *)(param_1[0x85] + 0x48) + 0x18))();
    param_1[0x85] = 0;
  }
  puVar4 = (undefined8 *)param_1[0x81];
  param_1[0x81] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    uVar2 = param_1[0x83];
    if (0x3cf < uVar2) {
      uVar6 = 0;
      puVar5 = puVar4;
      do {
        (**(code **)*puVar5)(puVar5);
        uVar6 = uVar6 + 1;
        puVar5 = puVar5 + 0x7a;
      } while (uVar6 < uVar2 / 0x3d0);
      uVar2 = param_1[0x83];
    }
    (**(code **)(*(long *)param_1[0x82] + 0x18))((long *)param_1[0x82],puVar4,uVar2,param_1[0x84]);
  }
  puVar4 = (undefined8 *)param_1[0x7d];
  param_1[0x7d] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    uVar2 = param_1[0x7f];
    if (0x3cf < uVar2) {
      uVar6 = 0;
      puVar5 = puVar4;
      do {
        (**(code **)*puVar5)(puVar5);
        uVar6 = uVar6 + 1;
        puVar5 = puVar5 + 0x7a;
      } while (uVar6 < uVar2 / 0x3d0);
      uVar2 = param_1[0x7f];
    }
    (**(code **)(*(long *)param_1[0x7e] + 0x18))((long *)param_1[0x7e],puVar4,uVar2,param_1[0x80]);
  }
  puVar4 = (undefined8 *)param_1[0x79];
  param_1[0x79] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    uVar2 = param_1[0x7b];
    if (0x3df < uVar2) {
      uVar6 = 0;
      puVar5 = puVar4;
      do {
        (**(code **)*puVar5)(puVar5);
        uVar6 = uVar6 + 1;
        puVar5 = puVar5 + 0x7c;
      } while (uVar6 < uVar2 / 0x3e0);
      uVar2 = param_1[0x7b];
    }
    (**(code **)(*(long *)param_1[0x7a] + 0x18))((long *)param_1[0x7a],puVar4,uVar2,param_1[0x7c]);
  }
  if (param_1[0x78] != 0) {
    (**(code **)(*(long *)(param_1[0x78] + 0x48) + 0x18))();
    param_1[0x78] = 0;
  }
  param_1[0x56] = (long)(PTR_DAT_027233d8 + 0x10);
  if (param_1[0x57] == 0) {
    param_1[0x57] = 0;
    pcVar3 = (code *)param_1[0x69];
  }
  else {
    FUN_006e2100(param_1[0x57],param_1 + 0x56);
    lVar1 = param_1[0x57];
    param_1[0x57] = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    pcVar3 = (code *)param_1[0x69];
  }
  if (pcVar3 != (code *)0x0) {
    param_1[0x6b] = 0;
    param_1[0x6a] = 0;
    param_1[0x69] = 0;
    param_1[0x68] = 0;
    (*pcVar3)(param_1 + 0x6c);
  }
  pcVar3 = (code *)param_1[0x59];
  if (pcVar3 != (code *)0x0) {
    param_1[0x5b] = 0;
    param_1[0x5a] = 0;
    param_1[0x59] = 0;
    param_1[0x58] = 0;
    (*pcVar3)(param_1 + 0x5c);
  }
  if (param_1[0x57] != 0) {
    (**(code **)(*(long *)(param_1[0x57] + 0x48) + 0x18))();
    param_1[0x57] = 0;
  }
  if (param_1[0x54] != 0) {
    (**(code **)(*(long *)(param_1[0x54] + 0x48) + 0x18))();
    param_1[0x54] = 0;
  }
  if (param_1[0x36] != 0) {
    (**(code **)(*(long *)(param_1[0x36] + 0x48) + 0x18))();
    param_1[0x36] = 0;
  }
  param_1[0x14] = (long)(PTR_DAT_0271dee8 + 0x10);
  if (param_1[0x15] == 0) {
    param_1[0x15] = 0;
    pcVar3 = (code *)param_1[0x27];
  }
  else {
    FUN_006e2100();
    lVar1 = param_1[0x15];
    param_1[0x15] = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    pcVar3 = (code *)param_1[0x27];
  }
  if (pcVar3 != (code *)0x0) {
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    (*pcVar3)(param_1 + 0x2a);
  }
  pcVar3 = (code *)param_1[0x17];
  if (pcVar3 != (code *)0x0) {
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    (*pcVar3)(param_1 + 0x1a);
  }
  if (param_1[0x15] != 0) {
    (**(code **)(*(long *)(param_1[0x15] + 0x48) + 0x18))();
    param_1[0x15] = 0;
  }
  if ((param_1[0xe] != 0) && (param_1[0xb] != 0)) {
    (**(code **)(*(long *)(param_1[0xb] + 0x48) + 0x18))();
    param_1[0xb] = 0;
  }
  param_1[0xb] = 0;
  param_1[0xc] = -0x340d631b7bddd9bb;
  param_1[0xd] = (long)&DAT_01d38550;
  param_1[0xe] = 0;
  if (param_1[0xf] != 0) {
    (**(code **)(*(long *)(param_1[0xf] + 0x48) + 0x18))();
    param_1[0xf] = 0;
  }
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((param_1[8] != 0) && (param_1[5] != 0)) {
    (**(code **)(*(long *)(param_1[5] + 0x48) + 0x18))();
    param_1[5] = 0;
  }
  param_1[5] = 0;
  param_1[6] = -0x340d631b7bddd9bb;
  param_1[7] = (long)&DAT_01d38550;
  param_1[8] = 0;
  if (param_1[9] != 0) {
    (**(code **)(*(long *)(param_1[9] + 0x48) + 0x18))();
    param_1[9] = 0;
  }
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  return;
}


