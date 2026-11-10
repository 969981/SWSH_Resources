/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dd0080; name: FUN_00dd0080
 */


void FUN_00dd0080(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  
  puVar8 = (undefined8 *)param_1[0x171];
  puVar1 = PTR_DAT_0271e970 + 0x98;
  puVar2 = PTR_DAT_0271e970 + 0xd8;
  *param_1 = (long)(PTR_DAT_0271e970 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  if (puVar8 != (undefined8 *)0x0) {
    if ((undefined8 *)param_1[0x172] == puVar8) {
      puVar3 = puVar8;
    }
    else {
      puVar3 = (undefined8 *)param_1[0x172];
      do {
        puVar9 = puVar3 + -4;
        puVar7 = (undefined8 *)*puVar9;
        *puVar9 = 0;
        if (puVar7 != (undefined8 *)0x0) {
          (**(code **)*puVar7)(puVar7);
          (**(code **)(*(long *)puVar3[-3] + 0x18))((long *)puVar3[-3],puVar7,puVar3[-2],puVar3[-1])
          ;
        }
        puVar3 = puVar9;
      } while (puVar8 != puVar9);
      puVar3 = (undefined8 *)param_1[0x171];
    }
    param_1[0x172] = (long)puVar8;
    (**(code **)(*(long *)param_1[0x174] + 0x18))
              ((long *)param_1[0x174],puVar3,param_1[0x173] - (long)puVar3,8);
  }
  lVar4 = param_1[0x16b];
  if (lVar4 != 0) {
    param_1[0x16c] = lVar4;
    (**(code **)(*(long *)param_1[0x16e] + 0x18))
              ((long *)param_1[0x16e],lVar4,param_1[0x16d] - lVar4,8);
  }
  lVar4 = param_1[0x164];
  if (lVar4 != 0) {
    param_1[0x165] = lVar4;
    (**(code **)(*(long *)param_1[0x167] + 0x18))
              ((long *)param_1[0x167],lVar4,param_1[0x166] - lVar4,4);
  }
  lVar4 = param_1[0x15e];
  if (lVar4 != 0) {
    lVar5 = param_1[0x15f];
    if (param_1[0x15f] == lVar4) {
      lVar5 = lVar4;
    }
    else {
      do {
        lVar10 = lVar5 + -0x80;
        if (*(long *)(lVar5 + -0x68) != 0) {
          (**(code **)(*(long *)(*(long *)(lVar5 + -0x68) + 0x48) + 0x18))();
          *(undefined8 *)(lVar5 + -0x68) = 0;
        }
        lVar5 = lVar10;
      } while (lVar4 != lVar10);
      lVar5 = param_1[0x15e];
    }
    param_1[0x15f] = lVar4;
    (**(code **)(*(long *)param_1[0x161] + 0x18))
              ((long *)param_1[0x161],lVar5,param_1[0x160] - lVar5,0x10);
  }
  if (param_1[0x157] != 0) {
    (**(code **)(*(long *)(param_1[0x157] + 0x48) + 0x18))();
    param_1[0x157] = 0;
  }
  if (param_1[0x152] != 0) {
    (**(code **)(*(long *)(param_1[0x152] + 0x48) + 0x18))();
    param_1[0x152] = 0;
  }
  FUN_00dd0810(param_1 + 0x14a);
  pcVar6 = (code *)param_1[0x13b];
  if (pcVar6 != (code *)0x0) {
    param_1[0x13d] = 0;
    param_1[0x13c] = 0;
    param_1[0x13b] = 0;
    param_1[0x13a] = 0;
    (*pcVar6)(param_1 + 0x13e);
  }
  param_1[0x116] = (long)(PTR_DAT_02715090 + 0x10);
  if (param_1[0x117] == 0) {
    param_1[0x117] = 0;
    pcVar6 = (code *)param_1[0x129];
  }
  else {
    FUN_006e2100(param_1[0x117],param_1 + 0x116);
    lVar4 = param_1[0x117];
    param_1[0x117] = 0;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
    }
    pcVar6 = (code *)param_1[0x129];
  }
  if (pcVar6 != (code *)0x0) {
    param_1[299] = 0;
    param_1[0x12a] = 0;
    param_1[0x129] = 0;
    param_1[0x128] = 0;
    (*pcVar6)(param_1 + 300);
  }
  pcVar6 = (code *)param_1[0x119];
  if (pcVar6 != (code *)0x0) {
    param_1[0x11b] = 0;
    param_1[0x11a] = 0;
    param_1[0x119] = 0;
    param_1[0x118] = 0;
    (*pcVar6)(param_1 + 0x11c);
  }
  if (param_1[0x117] != 0) {
    (**(code **)(*(long *)(param_1[0x117] + 0x48) + 0x18))();
    param_1[0x117] = 0;
  }
  pcVar6 = (code *)param_1[0xf7];
  if (pcVar6 != (code *)0x0) {
    param_1[0xf9] = 0;
    param_1[0xf8] = 0;
    param_1[0xf7] = 0;
    param_1[0xf6] = 0;
    (*pcVar6)(param_1 + 0xfa);
  }
  param_1[0xd2] = (long)(PTR_DAT_02710a48 + 0x10);
  if (param_1[0xd3] == 0) {
    param_1[0xd3] = 0;
    pcVar6 = (code *)param_1[0xe5];
  }
  else {
    FUN_006e2100(param_1[0xd3],param_1 + 0xd2);
    lVar4 = param_1[0xd3];
    param_1[0xd3] = 0;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
    }
    pcVar6 = (code *)param_1[0xe5];
  }
  if (pcVar6 != (code *)0x0) {
    param_1[0xe7] = 0;
    param_1[0xe6] = 0;
    param_1[0xe5] = 0;
    param_1[0xe4] = 0;
    (*pcVar6)(param_1 + 0xe8);
  }
  pcVar6 = (code *)param_1[0xd5];
  if (pcVar6 != (code *)0x0) {
    param_1[0xd7] = 0;
    param_1[0xd6] = 0;
    param_1[0xd5] = 0;
    param_1[0xd4] = 0;
    (*pcVar6)(param_1 + 0xd8);
  }
  if (param_1[0xd3] != 0) {
    (**(code **)(*(long *)(param_1[0xd3] + 0x48) + 0x18))();
    param_1[0xd3] = 0;
  }
  if (param_1[0xc1] != 0) {
    (**(code **)(*(long *)(param_1[0xc1] + 0x48) + 0x18))();
    param_1[0xc1] = 0;
  }
  pcVar6 = (code *)param_1[0xaf];
  if (pcVar6 != (code *)0x0) {
    param_1[0xb1] = 0;
    param_1[0xb0] = 0;
    param_1[0xaf] = 0;
    param_1[0xae] = 0;
    (*pcVar6)(param_1 + 0xb2);
  }
  param_1[0x8a] = (long)(PTR_DAT_02715e40 + 0x10);
  if (param_1[0x8b] == 0) {
    param_1[0x8b] = 0;
    pcVar6 = (code *)param_1[0x9d];
  }
  else {
    FUN_006e2100(param_1[0x8b],param_1 + 0x8a);
    lVar4 = param_1[0x8b];
    param_1[0x8b] = 0;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
    }
    pcVar6 = (code *)param_1[0x9d];
  }
  if (pcVar6 != (code *)0x0) {
    param_1[0x9f] = 0;
    param_1[0x9e] = 0;
    param_1[0x9d] = 0;
    param_1[0x9c] = 0;
    (*pcVar6)(param_1 + 0xa0);
  }
  pcVar6 = (code *)param_1[0x8d];
  if (pcVar6 != (code *)0x0) {
    param_1[0x8f] = 0;
    param_1[0x8e] = 0;
    param_1[0x8d] = 0;
    param_1[0x8c] = 0;
    (*pcVar6)(param_1 + 0x90);
  }
  if (param_1[0x8b] != 0) {
    (**(code **)(*(long *)(param_1[0x8b] + 0x48) + 0x18))();
    param_1[0x8b] = 0;
  }
  pcVar6 = (code *)param_1[0x6b];
  if (pcVar6 != (code *)0x0) {
    param_1[0x6d] = 0;
    param_1[0x6c] = 0;
    param_1[0x6b] = 0;
    param_1[0x6a] = 0;
    (*pcVar6)(param_1 + 0x6e);
  }
  param_1[0x46] = (long)(PTR_DAT_02715af8 + 0x10);
  if (param_1[0x47] == 0) {
    param_1[0x47] = 0;
    pcVar6 = (code *)param_1[0x59];
  }
  else {
    FUN_006e2100(param_1[0x47],param_1 + 0x46);
    lVar4 = param_1[0x47];
    param_1[0x47] = 0;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
    }
    pcVar6 = (code *)param_1[0x59];
  }
  if (pcVar6 != (code *)0x0) {
    param_1[0x5b] = 0;
    param_1[0x5a] = 0;
    param_1[0x59] = 0;
    param_1[0x58] = 0;
    (*pcVar6)(param_1 + 0x5c);
  }
  pcVar6 = (code *)param_1[0x49];
  if (pcVar6 != (code *)0x0) {
    param_1[0x4b] = 0;
    param_1[0x4a] = 0;
    param_1[0x49] = 0;
    param_1[0x48] = 0;
    (*pcVar6)(param_1 + 0x4c);
  }
  if (param_1[0x47] != 0) {
    (**(code **)(*(long *)(param_1[0x47] + 0x48) + 0x18))();
    param_1[0x47] = 0;
  }
  FUN_0070ec90(param_1);
  return;
}


