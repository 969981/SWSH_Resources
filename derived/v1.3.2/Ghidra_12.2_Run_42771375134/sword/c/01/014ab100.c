/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014ab100; name: FUN_014ab100
 */


void FUN_014ab100(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  code *pcVar5;
  
  puVar3 = PTR_DAT_027164e0;
  *param_1 = (long)(PTR_DAT_0272a1f0 + 0x10);
  param_1[0x13a] = (long)(puVar3 + 0x10);
  if (param_1[0x13b] == 0) {
    param_1[0x13b] = 0;
    pcVar5 = (code *)param_1[0x14d];
  }
  else {
    FUN_006e2100(param_1[0x13b],param_1 + 0x13a);
    lVar4 = param_1[0x13b];
    param_1[0x13b] = 0;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
    }
    pcVar5 = (code *)param_1[0x14d];
  }
  if (pcVar5 != (code *)0x0) {
    param_1[0x14f] = 0;
    param_1[0x14e] = 0;
    param_1[0x14d] = 0;
    param_1[0x14c] = 0;
    (*pcVar5)(param_1 + 0x150);
  }
  pcVar5 = (code *)param_1[0x13d];
  if (pcVar5 != (code *)0x0) {
    param_1[0x13f] = 0;
    param_1[0x13e] = 0;
    param_1[0x13d] = 0;
    param_1[0x13c] = 0;
    (*pcVar5)(param_1 + 0x140);
  }
  if (param_1[0x13b] != 0) {
    (**(code **)(*(long *)(param_1[0x13b] + 0x48) + 0x18))();
    param_1[0x13b] = 0;
  }
  puVar1 = PTR_DAT_02715090;
  param_1[0x118] = (long)(PTR_DAT_02715090 + 0x10);
  if (param_1[0x119] == 0) {
    param_1[0x119] = 0;
    pcVar5 = (code *)param_1[299];
  }
  else {
    FUN_006e2100(param_1[0x119],param_1 + 0x118);
    lVar4 = param_1[0x119];
    param_1[0x119] = 0;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
    }
    pcVar5 = (code *)param_1[299];
  }
  if (pcVar5 != (code *)0x0) {
    param_1[0x12d] = 0;
    param_1[300] = 0;
    param_1[299] = 0;
    param_1[0x12a] = 0;
    (*pcVar5)(param_1 + 0x12e);
  }
  pcVar5 = (code *)param_1[0x11b];
  if (pcVar5 != (code *)0x0) {
    param_1[0x11d] = 0;
    param_1[0x11c] = 0;
    param_1[0x11b] = 0;
    param_1[0x11a] = 0;
    (*pcVar5)(param_1 + 0x11e);
  }
  if (param_1[0x119] != 0) {
    (**(code **)(*(long *)(param_1[0x119] + 0x48) + 0x18))();
    param_1[0x119] = 0;
  }
  puVar2 = PTR_DAT_02715af8;
  param_1[0xf6] = (long)(PTR_DAT_02715af8 + 0x10);
  if (param_1[0xf7] == 0) {
    param_1[0xf7] = 0;
    pcVar5 = (code *)param_1[0x109];
  }
  else {
    FUN_006e2100(param_1[0xf7],param_1 + 0xf6);
    lVar4 = param_1[0xf7];
    param_1[0xf7] = 0;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
    }
    pcVar5 = (code *)param_1[0x109];
  }
  if (pcVar5 != (code *)0x0) {
    param_1[0x10b] = 0;
    param_1[0x10a] = 0;
    param_1[0x109] = 0;
    param_1[0x108] = 0;
    (*pcVar5)(param_1 + 0x10c);
  }
  pcVar5 = (code *)param_1[0xf9];
  if (pcVar5 != (code *)0x0) {
    param_1[0xfb] = 0;
    param_1[0xfa] = 0;
    param_1[0xf9] = 0;
    param_1[0xf8] = 0;
    (*pcVar5)(param_1 + 0xfc);
  }
  if (param_1[0xf7] != 0) {
    (**(code **)(*(long *)(param_1[0xf7] + 0x48) + 0x18))();
    param_1[0xf7] = 0;
  }
  lVar4 = param_1[0xf0];
  param_1[0xf0] = 0;
  if (lVar4 != 0) {
    FUN_00784490(lVar4);
    (**(code **)(*(long *)param_1[0xf1] + 0x18))
              ((long *)param_1[0xf1],lVar4,param_1[0xf2],param_1[0xf3]);
  }
  param_1[0xce] = (long)(PTR_DAT_02710808 + 0x10);
  if (param_1[0xcf] == 0) {
    param_1[0xcf] = 0;
    pcVar5 = (code *)param_1[0xe1];
  }
  else {
    FUN_006e2100(param_1[0xcf],param_1 + 0xce);
    lVar4 = param_1[0xcf];
    param_1[0xcf] = 0;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
    }
    pcVar5 = (code *)param_1[0xe1];
  }
  if (pcVar5 != (code *)0x0) {
    param_1[0xe3] = 0;
    param_1[0xe2] = 0;
    param_1[0xe1] = 0;
    param_1[0xe0] = 0;
    (*pcVar5)(param_1 + 0xe4);
  }
  pcVar5 = (code *)param_1[0xd1];
  if (pcVar5 != (code *)0x0) {
    param_1[0xd3] = 0;
    param_1[0xd2] = 0;
    param_1[0xd1] = 0;
    param_1[0xd0] = 0;
    (*pcVar5)(param_1 + 0xd4);
  }
  if (param_1[0xcf] != 0) {
    (**(code **)(*(long *)(param_1[0xcf] + 0x48) + 0x18))();
    param_1[0xcf] = 0;
  }
  param_1[0xac] = (long)(puVar3 + 0x10);
  if (param_1[0xad] == 0) {
    param_1[0xad] = 0;
    pcVar5 = (code *)param_1[0xbf];
  }
  else {
    FUN_006e2100(param_1[0xad],param_1 + 0xac);
    lVar4 = param_1[0xad];
    param_1[0xad] = 0;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
    }
    pcVar5 = (code *)param_1[0xbf];
  }
  if (pcVar5 != (code *)0x0) {
    param_1[0xc1] = 0;
    param_1[0xc0] = 0;
    param_1[0xbf] = 0;
    param_1[0xbe] = 0;
    (*pcVar5)(param_1 + 0xc2);
  }
  pcVar5 = (code *)param_1[0xaf];
  if (pcVar5 != (code *)0x0) {
    param_1[0xb1] = 0;
    param_1[0xb0] = 0;
    param_1[0xaf] = 0;
    param_1[0xae] = 0;
    (*pcVar5)(param_1 + 0xb2);
  }
  if (param_1[0xad] != 0) {
    (**(code **)(*(long *)(param_1[0xad] + 0x48) + 0x18))();
    param_1[0xad] = 0;
  }
  param_1[0x8a] = (long)(puVar3 + 0x10);
  if (param_1[0x8b] == 0) {
    param_1[0x8b] = 0;
    pcVar5 = (code *)param_1[0x9d];
  }
  else {
    FUN_006e2100(param_1[0x8b],param_1 + 0x8a);
    lVar4 = param_1[0x8b];
    param_1[0x8b] = 0;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
    }
    pcVar5 = (code *)param_1[0x9d];
  }
  if (pcVar5 != (code *)0x0) {
    param_1[0x9f] = 0;
    param_1[0x9e] = 0;
    param_1[0x9d] = 0;
    param_1[0x9c] = 0;
    (*pcVar5)(param_1 + 0xa0);
  }
  pcVar5 = (code *)param_1[0x8d];
  if (pcVar5 != (code *)0x0) {
    param_1[0x8f] = 0;
    param_1[0x8e] = 0;
    param_1[0x8d] = 0;
    param_1[0x8c] = 0;
    (*pcVar5)(param_1 + 0x90);
  }
  if (param_1[0x8b] != 0) {
    (**(code **)(*(long *)(param_1[0x8b] + 0x48) + 0x18))();
    param_1[0x8b] = 0;
  }
  param_1[0x68] = (long)(puVar3 + 0x10);
  if (param_1[0x69] == 0) {
    param_1[0x69] = 0;
    pcVar5 = (code *)param_1[0x7b];
  }
  else {
    FUN_006e2100(param_1[0x69],param_1 + 0x68);
    lVar4 = param_1[0x69];
    param_1[0x69] = 0;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
    }
    pcVar5 = (code *)param_1[0x7b];
  }
  if (pcVar5 != (code *)0x0) {
    param_1[0x7d] = 0;
    param_1[0x7c] = 0;
    param_1[0x7b] = 0;
    param_1[0x7a] = 0;
    (*pcVar5)(param_1 + 0x7e);
  }
  pcVar5 = (code *)param_1[0x6b];
  if (pcVar5 != (code *)0x0) {
    param_1[0x6d] = 0;
    param_1[0x6c] = 0;
    param_1[0x6b] = 0;
    param_1[0x6a] = 0;
    (*pcVar5)(param_1 + 0x6e);
  }
  if (param_1[0x69] != 0) {
    (**(code **)(*(long *)(param_1[0x69] + 0x48) + 0x18))();
    param_1[0x69] = 0;
  }
  param_1[0x46] = (long)(puVar1 + 0x10);
  if (param_1[0x47] == 0) {
    param_1[0x47] = 0;
    pcVar5 = (code *)param_1[0x59];
  }
  else {
    FUN_006e2100(param_1[0x47],param_1 + 0x46);
    lVar4 = param_1[0x47];
    param_1[0x47] = 0;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
    }
    pcVar5 = (code *)param_1[0x59];
  }
  if (pcVar5 != (code *)0x0) {
    param_1[0x5b] = 0;
    param_1[0x5a] = 0;
    param_1[0x59] = 0;
    param_1[0x58] = 0;
    (*pcVar5)(param_1 + 0x5c);
  }
  pcVar5 = (code *)param_1[0x49];
  if (pcVar5 != (code *)0x0) {
    param_1[0x4b] = 0;
    param_1[0x4a] = 0;
    param_1[0x49] = 0;
    param_1[0x48] = 0;
    (*pcVar5)(param_1 + 0x4c);
  }
  if (param_1[0x47] != 0) {
    (**(code **)(*(long *)(param_1[0x47] + 0x48) + 0x18))();
    param_1[0x47] = 0;
  }
  param_1[0x24] = (long)(puVar2 + 0x10);
  if (param_1[0x25] == 0) {
    param_1[0x25] = 0;
    pcVar5 = (code *)param_1[0x37];
  }
  else {
    FUN_006e2100(param_1[0x25],param_1 + 0x24);
    lVar4 = param_1[0x25];
    param_1[0x25] = 0;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
    }
    pcVar5 = (code *)param_1[0x37];
  }
  if (pcVar5 != (code *)0x0) {
    param_1[0x38] = 0;
    param_1[0x39] = 0;
    param_1[0x36] = 0;
    param_1[0x37] = 0;
    (*pcVar5)(param_1 + 0x3a);
  }
  pcVar5 = (code *)param_1[0x27];
  if (pcVar5 != (code *)0x0) {
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    (*pcVar5)(param_1 + 0x2a);
  }
  if (param_1[0x25] != 0) {
    (**(code **)(*(long *)(param_1[0x25] + 0x48) + 0x18))();
    param_1[0x25] = 0;
  }
  param_1[2] = (long)(PTR_DAT_02710a48 + 0x10);
  if (param_1[3] == 0) {
    param_1[3] = 0;
    pcVar5 = (code *)param_1[0x15];
  }
  else {
    FUN_006e2100();
    lVar4 = param_1[3];
    param_1[3] = 0;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
    }
    pcVar5 = (code *)param_1[0x15];
  }
  if (pcVar5 != (code *)0x0) {
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    (*pcVar5)(param_1 + 0x18);
  }
  pcVar5 = (code *)param_1[5];
  if (pcVar5 != (code *)0x0) {
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    (*pcVar5)(param_1 + 8);
  }
  if (param_1[3] != 0) {
    (**(code **)(*(long *)(param_1[3] + 0x48) + 0x18))();
    param_1[3] = 0;
  }
  return;
}


