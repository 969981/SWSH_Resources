/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00da9740; name: FUN_00da9740
 */


void FUN_00da9740(undefined8 param_1,char *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  char cVar2;
  undefined *puVar3;
  undefined4 uVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  
  cVar2 = *param_4;
  *param_2 = cVar2;
  if (cVar2 != '\0') {
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_4 + 4);
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_4 + 8);
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_4 + 0xc);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_4 + 0x10);
    *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_4 + 0x14);
    *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_4 + 0x18);
    *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_4 + 0x1c);
    *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_4 + 0x20);
    *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(param_4 + 0x24);
    *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_4 + 0x28);
    *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(param_4 + 0x2c);
    *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_4 + 0x30);
    *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)(param_4 + 0x34);
    *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(param_4 + 0x38);
    *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)(param_4 + 0x3c);
    *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_4 + 0x40);
    *(undefined4 *)(param_2 + 0x44) = *(undefined4 *)(param_4 + 0x44);
  }
  puVar3 = PTR_PTR_02718e90;
  fVar8 = *(float *)(param_3 + 0x48);
  fVar9 = *(float *)(param_4 + 0x48);
  fVar5 = (float)(**(code **)PTR_PTR_02718e90)(param_1);
  *(float *)(param_2 + 0x48) = fVar8 + (fVar9 - fVar8) * fVar5;
  fVar8 = *(float *)(param_3 + 0x4c);
  fVar9 = *(float *)(param_4 + 0x4c);
  fVar5 = (float)(**(code **)puVar3)(param_1);
  *(float *)(param_2 + 0x4c) = fVar8 + (fVar9 - fVar8) * fVar5;
  fVar8 = *(float *)(param_3 + 0x50);
  fVar9 = *(float *)(param_4 + 0x50);
  fVar5 = (float)(**(code **)puVar3)(param_1);
  *(float *)(param_2 + 0x50) = fVar8 + (fVar9 - fVar8) * fVar5;
  fVar8 = *(float *)(param_3 + 0x54);
  fVar9 = *(float *)(param_4 + 0x54);
  fVar5 = (float)(**(code **)puVar3)(param_1);
  *(float *)(param_2 + 0x54) = fVar8 + (fVar9 - fVar8) * fVar5;
  fVar8 = *(float *)(param_3 + 0x58);
  fVar9 = *(float *)(param_4 + 0x58);
  fVar5 = (float)(**(code **)puVar3)(param_1);
  *(float *)(param_2 + 0x58) = fVar8 + (fVar9 - fVar8) * fVar5;
  fVar8 = *(float *)(param_3 + 0x5c);
  fVar9 = *(float *)(param_4 + 0x5c);
  fVar5 = (float)(**(code **)puVar3)(param_1);
  *(float *)(param_2 + 0x5c) = fVar8 + (fVar9 - fVar8) * fVar5;
  fVar8 = *(float *)(param_3 + 0x60);
  fVar9 = *(float *)(param_4 + 0x60);
  fVar5 = (float)(**(code **)puVar3)(param_1);
  *(float *)(param_2 + 0x60) = fVar8 + (fVar9 - fVar8) * fVar5;
  fVar8 = *(float *)(param_3 + 100);
  fVar9 = *(float *)(param_4 + 100);
  fVar5 = (float)(**(code **)puVar3)(param_1);
  *(float *)(param_2 + 100) = fVar8 + (fVar9 - fVar8) * fVar5;
  fVar8 = *(float *)(param_3 + 0x68);
  fVar9 = *(float *)(param_4 + 0x68);
  fVar5 = (float)(**(code **)puVar3)(param_1);
  *(float *)(param_2 + 0x68) = fVar8 + (fVar9 - fVar8) * fVar5;
  fVar8 = *(float *)(param_3 + 0x6c);
  fVar9 = *(float *)(param_4 + 0x6c);
  fVar5 = (float)(**(code **)puVar3)(param_1);
  *(float *)(param_2 + 0x6c) = fVar8 + (fVar9 - fVar8) * fVar5;
  fVar8 = *(float *)(param_3 + 0x70);
  fVar9 = *(float *)(param_4 + 0x70);
  fVar5 = (float)(**(code **)puVar3)(param_1);
  *(float *)(param_2 + 0x70) = fVar8 + (fVar9 - fVar8) * fVar5;
  fVar8 = *(float *)(param_3 + 0x74);
  fVar9 = *(float *)(param_4 + 0x74);
  fVar5 = (float)(**(code **)puVar3)(param_1);
  *(float *)(param_2 + 0x74) = fVar8 + (fVar9 - fVar8) * fVar5;
  fVar8 = *(float *)(param_3 + 0x78);
  fVar9 = *(float *)(param_4 + 0x78);
  fVar5 = (float)(**(code **)puVar3)(param_1);
  *(float *)(param_2 + 0x78) = fVar8 + (fVar9 - fVar8) * fVar5;
  fVar8 = *(float *)(param_3 + 0x7c);
  fVar9 = *(float *)(param_4 + 0x7c);
  fVar5 = (float)(**(code **)puVar3)(param_1);
  *(float *)(param_2 + 0x7c) = fVar8 + (fVar9 - fVar8) * fVar5;
  pcVar1 = param_4;
  if ((float)param_1 < 0.5) {
    pcVar1 = param_3;
  }
  param_2[0x80] = pcVar1[0x80];
  cVar2 = param_4[0x81];
  if (cVar2 == param_3[0x81]) {
    param_2[0x81] = cVar2;
    if (cVar2 != '\0') {
      *(undefined4 *)(param_2 + 0x84) = *(undefined4 *)(pcVar1 + 0x84);
      fVar8 = *(float *)(param_3 + 0x88);
      fVar9 = *(float *)(param_4 + 0x88);
      fVar5 = (float)(**(code **)puVar3)(param_1);
      *(float *)(param_2 + 0x88) = fVar8 + (fVar9 - fVar8) * fVar5;
      fVar8 = *(float *)(param_3 + 0x8c);
      fVar9 = *(float *)(param_4 + 0x8c);
      fVar5 = (float)(**(code **)puVar3)(param_1);
      *(float *)(param_2 + 0x8c) = fVar8 + (fVar9 - fVar8) * fVar5;
      fVar8 = *(float *)(param_3 + 0x90);
      fVar9 = *(float *)(param_4 + 0x90);
      fVar5 = (float)(**(code **)puVar3)(param_1);
      *(float *)(param_2 + 0x90) = fVar8 + (fVar9 - fVar8) * fVar5;
    }
    cVar2 = param_4[0x94];
    param_2[0x94] = cVar2;
  }
  else {
    param_2[0x81] = '\x01';
    if (cVar2 == '\0') {
      *(undefined4 *)(param_2 + 0x84) = *(undefined4 *)(param_3 + 0x84);
      fVar8 = *(float *)(param_3 + 0x88);
      fVar5 = (float)(**(code **)puVar3)(param_1);
      *(float *)(param_2 + 0x88) = fVar8 + (0.0 - fVar8) * fVar5;
      *(undefined4 *)(param_2 + 0x8c) = *(undefined4 *)(param_3 + 0x8c);
      *(undefined4 *)(param_2 + 0x90) = *(undefined4 *)(param_3 + 0x90);
      cVar2 = param_4[0x94];
      param_2[0x94] = cVar2;
    }
    else {
      *(undefined4 *)(param_2 + 0x84) = *(undefined4 *)(param_4 + 0x84);
      fVar8 = *(float *)(param_4 + 0x88);
      fVar5 = (float)(**(code **)puVar3)(param_1);
      *(float *)(param_2 + 0x88) = fVar8 * fVar5 + 0.0;
      *(undefined4 *)(param_2 + 0x8c) = *(undefined4 *)(param_4 + 0x8c);
      *(undefined4 *)(param_2 + 0x90) = *(undefined4 *)(param_4 + 0x90);
      cVar2 = param_4[0x94];
      param_2[0x94] = cVar2;
    }
  }
  if (cVar2 != '\0') {
    param_2[0x95] = pcVar1[0x95];
    fVar8 = *(float *)(param_3 + 0x98);
    fVar9 = *(float *)(param_4 + 0x98);
    fVar5 = (float)(**(code **)puVar3)(param_1);
    *(float *)(param_2 + 0x98) = fVar8 + (fVar9 - fVar8) * fVar5;
    fVar8 = *(float *)(param_3 + 0x9c);
    fVar9 = *(float *)(param_4 + 0x9c);
    fVar5 = (float)(**(code **)puVar3)(param_1);
    *(float *)(param_2 + 0x9c) = fVar8 + (fVar9 - fVar8) * fVar5;
  }
  param_2[0xa0] = pcVar1[0xa0];
  cVar2 = param_4[0xd8];
  param_2[0xd8] = cVar2;
  if (cVar2 != '\0') {
    fVar8 = *(float *)(param_3 + 0xe0);
    fVar9 = *(float *)(param_4 + 0xe0);
    fVar5 = (float)(**(code **)puVar3)(param_1);
    *(undefined8 *)(param_2 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
    *(ulong *)(param_2 + 0xe0) =
         CONCAT44((int)((ulong)*(undefined8 *)(param_2 + 0xe0) >> 0x20),
                  fVar8 + (fVar9 - fVar8) * fVar5);
    fVar8 = *(float *)(param_3 + 0xe4);
    fVar9 = *(float *)(param_4 + 0xe4);
    fVar5 = (float)(**(code **)puVar3)(param_1);
    *(undefined8 *)(param_2 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
    *(ulong *)(param_2 + 0xe0) =
         CONCAT44(fVar8 + (fVar9 - fVar8) * fVar5,(int)*(undefined8 *)(param_2 + 0xe0));
    fVar8 = *(float *)(param_3 + 0xe8);
    fVar9 = *(float *)(param_4 + 0xe8);
    fVar5 = (float)(**(code **)puVar3)(param_1);
    *(ulong *)(param_2 + 0xe8) =
         CONCAT44((int)((ulong)*(undefined8 *)(param_2 + 0xe8) >> 0x20),
                  fVar8 + (fVar9 - fVar8) * fVar5);
    *(undefined8 *)(param_2 + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
    fVar8 = *(float *)(param_3 + 0xec);
    fVar9 = *(float *)(param_4 + 0xec);
    fVar5 = (float)(**(code **)puVar3)(param_1);
    *(ulong *)(param_2 + 0xe8) =
         CONCAT44(fVar8 + (fVar9 - fVar8) * fVar5,(int)*(undefined8 *)(param_2 + 0xe8));
    *(undefined8 *)(param_2 + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
    fVar8 = *(float *)(param_3 + 0xf0);
    fVar9 = *(float *)(param_4 + 0xf0);
    fVar5 = (float)(**(code **)puVar3)(param_1);
    *(float *)(param_2 + 0xf0) = fVar8 + (fVar9 - fVar8) * fVar5;
    param_2[0xf4] = pcVar1[0xf4];
    param_2[0xf5] = pcVar1[0xf5];
  }
  fVar8 = *(float *)(param_3 + 0x108);
  fVar9 = *(float *)(param_4 + 0x108);
  fVar5 = (float)(**(code **)puVar3)(param_1);
  *(float *)(param_2 + 0x108) = fVar8 + (fVar9 - fVar8) * fVar5;
  fVar8 = *(float *)(param_3 + 0x10c);
  fVar9 = *(float *)(param_4 + 0x10c);
  fVar5 = (float)(**(code **)puVar3)(param_1);
  *(float *)(param_2 + 0x10c) = fVar8 + (fVar9 - fVar8) * fVar5;
  fVar8 = *(float *)(param_3 + 0x110);
  fVar9 = *(float *)(param_4 + 0x110);
  fVar5 = (float)(**(code **)puVar3)(param_1);
  *(float *)(param_2 + 0x110) = fVar8 + (fVar9 - fVar8) * fVar5;
  fVar8 = *(float *)(param_3 + 0x114);
  fVar9 = *(float *)(param_4 + 0x114);
  fVar5 = (float)(**(code **)puVar3)(param_1);
  *(float *)(param_2 + 0x114) = fVar8 + (fVar9 - fVar8) * fVar5;
  fVar8 = *(float *)(param_3 + 0x120);
  fVar9 = *(float *)(param_4 + 0x120);
  fVar5 = (float)(**(code **)puVar3)(param_1);
  *(undefined8 *)(param_2 + 0x128) = *(undefined8 *)(param_2 + 0x128);
  *(ulong *)(param_2 + 0x120) =
       CONCAT44((int)((ulong)*(undefined8 *)(param_2 + 0x120) >> 0x20),
                fVar8 + (fVar9 - fVar8) * fVar5);
  fVar8 = *(float *)(param_3 + 0x124);
  fVar9 = *(float *)(param_4 + 0x124);
  fVar5 = (float)(**(code **)puVar3)(param_1);
  *(undefined8 *)(param_2 + 0x128) = *(undefined8 *)(param_2 + 0x128);
  *(ulong *)(param_2 + 0x120) =
       CONCAT44(fVar8 + (fVar9 - fVar8) * fVar5,(int)*(undefined8 *)(param_2 + 0x120));
  fVar8 = *(float *)(param_3 + 0x128);
  fVar9 = *(float *)(param_4 + 0x128);
  fVar5 = (float)(**(code **)puVar3)(param_1);
  *(ulong *)(param_2 + 0x128) =
       CONCAT44((int)((ulong)*(undefined8 *)(param_2 + 0x128) >> 0x20),
                fVar8 + (fVar9 - fVar8) * fVar5);
  *(undefined8 *)(param_2 + 0x120) = *(undefined8 *)(param_2 + 0x120);
  fVar8 = *(float *)(param_3 + 300);
  fVar9 = *(float *)(param_4 + 300);
  fVar5 = (float)(**(code **)puVar3)(param_1);
  *(ulong *)(param_2 + 0x128) =
       CONCAT44(fVar8 + (fVar9 - fVar8) * fVar5,(int)*(undefined8 *)(param_2 + 0x128));
  *(undefined8 *)(param_2 + 0x120) = *(undefined8 *)(param_2 + 0x120);
  fVar8 = *(float *)(param_3 + 0x130);
  fVar9 = *(float *)(param_4 + 0x130);
  fVar5 = (float)(**(code **)puVar3)(param_1);
  *(float *)(param_2 + 0x130) = fVar8 + (fVar9 - fVar8) * fVar5;
  fVar8 = *(float *)(param_3 + 0x134);
  fVar9 = *(float *)(param_4 + 0x134);
  fVar5 = (float)(**(code **)puVar3)(param_1);
  *(float *)(param_2 + 0x134) = fVar8 + (fVar9 - fVar8) * fVar5;
  iVar6 = *(int *)(param_3 + 0x138);
  iVar7 = *(int *)(param_4 + 0x138);
  fVar5 = (float)(**(code **)puVar3)(param_1);
  *(int *)(param_2 + 0x138) = (int)(((float)iVar7 - (float)iVar6) * fVar5 + (float)iVar6);
  fVar8 = *(float *)(param_3 + 0x140);
  fVar9 = *(float *)(param_4 + 0x140);
  fVar5 = (float)(**(code **)puVar3)(param_1);
  *(undefined8 *)(param_2 + 0x148) = *(undefined8 *)(param_2 + 0x148);
  *(ulong *)(param_2 + 0x140) =
       CONCAT44((int)((ulong)*(undefined8 *)(param_2 + 0x140) >> 0x20),
                fVar8 + (fVar9 - fVar8) * fVar5);
  fVar8 = *(float *)(param_3 + 0x144);
  fVar9 = *(float *)(param_4 + 0x144);
  fVar5 = (float)(**(code **)puVar3)(param_1);
  *(undefined8 *)(param_2 + 0x148) = *(undefined8 *)(param_2 + 0x148);
  *(ulong *)(param_2 + 0x140) =
       CONCAT44(fVar8 + (fVar9 - fVar8) * fVar5,(int)*(undefined8 *)(param_2 + 0x140));
  fVar8 = *(float *)(param_3 + 0x148);
  fVar9 = *(float *)(param_4 + 0x148);
  fVar5 = (float)(**(code **)puVar3)(param_1);
  *(ulong *)(param_2 + 0x148) =
       CONCAT44((int)((ulong)*(undefined8 *)(param_2 + 0x148) >> 0x20),
                fVar8 + (fVar9 - fVar8) * fVar5);
  *(undefined8 *)(param_2 + 0x140) = *(undefined8 *)(param_2 + 0x140);
  fVar8 = *(float *)(param_3 + 0x14c);
  fVar9 = *(float *)(param_4 + 0x14c);
  fVar5 = (float)(**(code **)puVar3)(param_1);
  *(ulong *)(param_2 + 0x148) =
       CONCAT44(fVar8 + (fVar9 - fVar8) * fVar5,(int)*(undefined8 *)(param_2 + 0x148));
  *(undefined8 *)(param_2 + 0x140) = *(undefined8 *)(param_2 + 0x140);
  fVar8 = *(float *)(param_3 + 0x150);
  fVar9 = *(float *)(param_4 + 0x150);
  fVar5 = (float)(**(code **)puVar3)(param_1);
  *(float *)(param_2 + 0x150) = fVar8 + (fVar9 - fVar8) * fVar5;
  fVar8 = *(float *)(param_3 + 0x154);
  fVar9 = *(float *)(param_4 + 0x154);
  fVar5 = (float)(**(code **)puVar3)(param_1);
  *(float *)(param_2 + 0x154) = fVar8 + (fVar9 - fVar8) * fVar5;
  fVar8 = *(float *)(param_3 + 0x158);
  fVar9 = *(float *)(param_4 + 0x158);
  fVar5 = (float)(**(code **)puVar3)(param_1);
  *(float *)(param_2 + 0x158) = fVar8 + (fVar9 - fVar8) * fVar5;
  fVar5 = 1.0;
  if (param_3[0x15c] == '\0') {
    fVar5 = 0.0;
  }
  fVar8 = 1.0;
  if (param_4[0x15c] == '\0') {
    fVar8 = 0.0;
  }
  fVar9 = (float)(**(code **)puVar3)(param_1);
  param_2[0x15c] = fVar9 * (fVar8 - fVar5) + fVar5 != 0.0;
  fVar8 = *(float *)(param_3 + 0x160);
  fVar9 = *(float *)(param_4 + 0x160);
  fVar5 = (float)(**(code **)puVar3)(param_1);
  *(undefined8 *)(param_2 + 0x168) = *(undefined8 *)(param_2 + 0x168);
  *(ulong *)(param_2 + 0x160) =
       CONCAT44((int)((ulong)*(undefined8 *)(param_2 + 0x160) >> 0x20),
                fVar8 + (fVar9 - fVar8) * fVar5);
  fVar8 = *(float *)(param_3 + 0x164);
  fVar9 = *(float *)(param_4 + 0x164);
  fVar5 = (float)(**(code **)puVar3)(param_1);
  *(undefined8 *)(param_2 + 0x168) = *(undefined8 *)(param_2 + 0x168);
  *(ulong *)(param_2 + 0x160) =
       CONCAT44(fVar8 + (fVar9 - fVar8) * fVar5,(int)*(undefined8 *)(param_2 + 0x160));
  fVar8 = *(float *)(param_3 + 0x168);
  fVar9 = *(float *)(param_4 + 0x168);
  fVar5 = (float)(**(code **)puVar3)(param_1);
  *(ulong *)(param_2 + 0x168) =
       CONCAT44((int)((ulong)*(undefined8 *)(param_2 + 0x168) >> 0x20),
                fVar8 + (fVar9 - fVar8) * fVar5);
  *(undefined8 *)(param_2 + 0x160) = *(undefined8 *)(param_2 + 0x160);
  fVar8 = *(float *)(param_3 + 0x16c);
  fVar9 = *(float *)(param_4 + 0x16c);
  fVar5 = (float)(**(code **)puVar3)(param_1);
  *(ulong *)(param_2 + 0x168) =
       CONCAT44(fVar8 + (fVar9 - fVar8) * fVar5,(int)*(undefined8 *)(param_2 + 0x168));
  *(undefined8 *)(param_2 + 0x160) = *(undefined8 *)(param_2 + 0x160);
  fVar8 = *(float *)(param_3 + 0x170);
  fVar9 = *(float *)(param_4 + 0x170);
  fVar5 = (float)(**(code **)puVar3)(param_1);
  *(float *)(param_2 + 0x170) = fVar8 + (fVar9 - fVar8) * fVar5;
  iVar6 = *(int *)(param_3 + 0x174);
  iVar7 = *(int *)(param_4 + 0x174);
  fVar5 = (float)(**(code **)puVar3)(param_1);
  *(int *)(param_2 + 0x174) = (int)(((float)iVar7 - (float)iVar6) * fVar5 + (float)iVar6);
  fVar8 = *(float *)(param_3 + 0x178);
  fVar9 = *(float *)(param_4 + 0x178);
  fVar5 = (float)(**(code **)puVar3)(param_1);
  *(float *)(param_2 + 0x178) = fVar8 + (fVar9 - fVar8) * fVar5;
  fVar8 = *(float *)(param_3 + 0x17c);
  fVar9 = *(float *)(param_4 + 0x17c);
  fVar5 = (float)(**(code **)puVar3)(param_1);
  *(float *)(param_2 + 0x17c) = fVar8 + (fVar9 - fVar8) * fVar5;
  param_2[0x180] = pcVar1[0x180];
  fVar8 = *(float *)(param_3 + 0x184);
  fVar9 = *(float *)(param_4 + 0x184);
  fVar5 = (float)(**(code **)puVar3)(param_1);
  *(float *)(param_2 + 0x184) = fVar8 + (fVar9 - fVar8) * fVar5;
  fVar8 = *(float *)(param_3 + 0x188);
  fVar9 = *(float *)(param_4 + 0x188);
  fVar5 = (float)(**(code **)puVar3)(param_1);
  *(float *)(param_2 + 0x188) = fVar8 + (fVar9 - fVar8) * fVar5;
  param_2[0x18c] = pcVar1[0x18c];
  fVar8 = *(float *)(param_3 + 400);
  fVar9 = *(float *)(param_4 + 400);
  fVar5 = (float)(**(code **)puVar3)(param_1);
  *(undefined8 *)(param_2 + 0x198) = *(undefined8 *)(param_2 + 0x198);
  *(ulong *)(param_2 + 400) =
       CONCAT44((int)((ulong)*(undefined8 *)(param_2 + 400) >> 0x20),fVar8 + (fVar9 - fVar8) * fVar5
               );
  fVar8 = *(float *)(param_3 + 0x194);
  fVar9 = *(float *)(param_4 + 0x194);
  fVar5 = (float)(**(code **)puVar3)(param_1);
  *(undefined8 *)(param_2 + 0x198) = *(undefined8 *)(param_2 + 0x198);
  *(ulong *)(param_2 + 400) =
       CONCAT44(fVar8 + (fVar9 - fVar8) * fVar5,(int)*(undefined8 *)(param_2 + 400));
  fVar8 = *(float *)(param_3 + 0x198);
  fVar9 = *(float *)(param_4 + 0x198);
  fVar5 = (float)(**(code **)puVar3)(param_1);
  *(ulong *)(param_2 + 0x198) =
       CONCAT44((int)((ulong)*(undefined8 *)(param_2 + 0x198) >> 0x20),
                fVar8 + (fVar9 - fVar8) * fVar5);
  *(undefined8 *)(param_2 + 400) = *(undefined8 *)(param_2 + 400);
  fVar8 = *(float *)(param_3 + 0x19c);
  fVar9 = *(float *)(param_4 + 0x19c);
  fVar5 = (float)(**(code **)puVar3)(param_1);
  *(ulong *)(param_2 + 0x198) =
       CONCAT44(fVar8 + (fVar9 - fVar8) * fVar5,(int)*(undefined8 *)(param_2 + 0x198));
  *(undefined8 *)(param_2 + 400) = *(undefined8 *)(param_2 + 400);
  fVar8 = *(float *)(param_3 + 0x1a0);
  fVar9 = *(float *)(param_4 + 0x1a0);
  fVar5 = (float)(**(code **)puVar3)(param_1);
  *(float *)(param_2 + 0x1a0) = fVar8 + (fVar9 - fVar8) * fVar5;
  fVar8 = *(float *)(param_3 + 0x1a4);
  fVar9 = *(float *)(param_4 + 0x1a4);
  fVar5 = (float)(**(code **)puVar3)(param_1);
  *(float *)(param_2 + 0x1a4) = fVar8 + (fVar9 - fVar8) * fVar5;
  fVar8 = *(float *)(param_3 + 0x1b0);
  fVar9 = *(float *)(param_4 + 0x1b0);
  fVar5 = (float)(**(code **)puVar3)(param_1);
  *(float *)(param_2 + 0x1b0) = fVar8 + (fVar9 - fVar8) * fVar5;
  fVar8 = *(float *)(param_3 + 0x1b4);
  fVar9 = *(float *)(param_4 + 0x1b4);
  fVar5 = (float)(**(code **)puVar3)(param_1);
  *(float *)(param_2 + 0x1b4) = fVar8 + (fVar9 - fVar8) * fVar5;
  cVar2 = param_4[0x200];
  if (cVar2 == param_3[0x200]) {
    param_2[0x200] = cVar2;
    if (cVar2 != '\0') {
      fVar8 = *(float *)(param_3 + 0x204);
      fVar9 = *(float *)(param_4 + 0x204);
      fVar5 = (float)(**(code **)puVar3)(param_1);
      *(float *)(param_2 + 0x204) = fVar8 + (fVar9 - fVar8) * fVar5;
      fVar8 = *(float *)(param_3 + 0x210);
      fVar9 = *(float *)(param_4 + 0x210);
      fVar5 = (float)(**(code **)puVar3)(param_1);
      *(undefined8 *)(param_2 + 0x218) = *(undefined8 *)(param_2 + 0x218);
      *(ulong *)(param_2 + 0x210) =
           CONCAT44((int)((ulong)*(undefined8 *)(param_2 + 0x210) >> 0x20),
                    fVar8 + (fVar9 - fVar8) * fVar5);
      fVar8 = *(float *)(param_3 + 0x214);
      fVar9 = *(float *)(param_4 + 0x214);
      fVar5 = (float)(**(code **)puVar3)(param_1);
      *(undefined8 *)(param_2 + 0x218) = *(undefined8 *)(param_2 + 0x218);
      *(ulong *)(param_2 + 0x210) =
           CONCAT44(fVar8 + (fVar9 - fVar8) * fVar5,(int)*(undefined8 *)(param_2 + 0x210));
      fVar8 = *(float *)(param_3 + 0x218);
      fVar9 = *(float *)(param_4 + 0x218);
      fVar5 = (float)(**(code **)puVar3)(param_1);
      *(ulong *)(param_2 + 0x218) = (ulong)(uint)(fVar8 + (fVar9 - fVar8) * fVar5);
      *(undefined8 *)(param_2 + 0x210) = *(undefined8 *)(param_2 + 0x210);
      fVar8 = *(float *)(param_3 + 0x220);
      fVar9 = *(float *)(param_4 + 0x220);
      fVar5 = (float)(**(code **)puVar3)(param_1);
      *(undefined8 *)(param_2 + 0x228) = *(undefined8 *)(param_2 + 0x228);
      *(ulong *)(param_2 + 0x220) =
           CONCAT44((int)((ulong)*(undefined8 *)(param_2 + 0x220) >> 0x20),
                    fVar8 + (fVar9 - fVar8) * fVar5);
      fVar8 = *(float *)(param_3 + 0x224);
      fVar9 = *(float *)(param_4 + 0x224);
      fVar5 = (float)(**(code **)puVar3)(param_1);
      *(undefined8 *)(param_2 + 0x228) = *(undefined8 *)(param_2 + 0x228);
      *(ulong *)(param_2 + 0x220) =
           CONCAT44(fVar8 + (fVar9 - fVar8) * fVar5,(int)*(undefined8 *)(param_2 + 0x220));
      fVar8 = *(float *)(param_3 + 0x228);
      fVar9 = *(float *)(param_4 + 0x228);
      fVar5 = (float)(**(code **)puVar3)(param_1);
      *(ulong *)(param_2 + 0x228) = (ulong)(uint)(fVar8 + (fVar9 - fVar8) * fVar5);
      *(undefined8 *)(param_2 + 0x220) = *(undefined8 *)(param_2 + 0x220);
      fVar8 = *(float *)(param_3 + 0x230);
      fVar9 = *(float *)(param_4 + 0x230);
      fVar5 = (float)(**(code **)puVar3)(param_1);
      *(float *)(param_2 + 0x230) = fVar8 + (fVar9 - fVar8) * fVar5;
      fVar8 = *(float *)(param_3 + 0x234);
      fVar9 = *(float *)(param_4 + 0x234);
      fVar5 = (float)(**(code **)puVar3)(param_1);
      *(float *)(param_2 + 0x234) = fVar8 + (fVar9 - fVar8) * fVar5;
      fVar8 = *(float *)(param_3 + 0x238);
      fVar9 = *(float *)(param_4 + 0x238);
      fVar5 = (float)(**(code **)puVar3)(param_1);
      *(float *)(param_2 + 0x238) = fVar8 + (fVar9 - fVar8) * fVar5;
      fVar8 = *(float *)(param_3 + 0x23c);
      fVar9 = *(float *)(param_4 + 0x23c);
      fVar5 = (float)(**(code **)puVar3)(param_1);
      *(float *)(param_2 + 0x23c) = fVar8 + (fVar9 - fVar8) * fVar5;
      fVar8 = *(float *)(param_3 + 0x240);
      fVar9 = *(float *)(param_4 + 0x240);
      fVar5 = (float)(**(code **)puVar3)(param_1);
      *(float *)(param_2 + 0x240) = fVar8 + (fVar9 - fVar8) * fVar5;
      fVar8 = *(float *)(param_3 + 0x244);
      fVar9 = *(float *)(param_4 + 0x244);
      fVar5 = (float)(**(code **)puVar3)(param_1);
      *(float *)(param_2 + 0x244) = fVar8 + (fVar9 - fVar8) * fVar5;
      fVar8 = *(float *)(param_3 + 0x250);
      fVar9 = *(float *)(param_4 + 0x250);
      fVar5 = (float)(**(code **)puVar3)(param_1);
      *(undefined8 *)(param_2 + 600) = *(undefined8 *)(param_2 + 600);
      *(ulong *)(param_2 + 0x250) =
           CONCAT44((int)((ulong)*(undefined8 *)(param_2 + 0x250) >> 0x20),
                    fVar8 + (fVar9 - fVar8) * fVar5);
      fVar8 = *(float *)(param_3 + 0x254);
      fVar9 = *(float *)(param_4 + 0x254);
      fVar5 = (float)(**(code **)puVar3)(param_1);
      *(undefined8 *)(param_2 + 600) = *(undefined8 *)(param_2 + 600);
      *(ulong *)(param_2 + 0x250) =
           CONCAT44(fVar8 + (fVar9 - fVar8) * fVar5,(int)*(undefined8 *)(param_2 + 0x250));
      fVar8 = *(float *)(param_3 + 600);
      fVar9 = *(float *)(param_4 + 600);
      fVar5 = (float)(**(code **)puVar3)(param_1);
      *(ulong *)(param_2 + 600) = (ulong)(uint)(fVar8 + (fVar9 - fVar8) * fVar5);
      *(undefined8 *)(param_2 + 0x250) = *(undefined8 *)(param_2 + 0x250);
      fVar8 = *(float *)(param_3 + 0x260);
      fVar9 = *(float *)(param_4 + 0x260);
      fVar5 = (float)(**(code **)puVar3)(param_1);
      *(float *)(param_2 + 0x260) = fVar8 + (fVar9 - fVar8) * fVar5;
      fVar8 = *(float *)(param_3 + 0x264);
      fVar9 = *(float *)(param_4 + 0x264);
      fVar5 = (float)(**(code **)puVar3)(param_1);
      *(float *)(param_2 + 0x264) = fVar8 + (fVar9 - fVar8) * fVar5;
    }
  }
  else {
    param_2[0x200] = '\x01';
    if (param_4[0x200] == '\0') {
      fVar8 = *(float *)(param_3 + 0x204);
      fVar5 = (float)(**(code **)puVar3)(param_1);
      *(float *)(param_2 + 0x204) = fVar8 + (0.0 - fVar8) * fVar5;
      *(undefined8 *)(param_2 + 0x218) = *(undefined8 *)(param_3 + 0x218);
      *(undefined8 *)(param_2 + 0x210) = *(undefined8 *)(param_3 + 0x210);
      *(undefined8 *)(param_2 + 0x228) = *(undefined8 *)(param_3 + 0x228);
      *(undefined8 *)(param_2 + 0x220) = *(undefined8 *)(param_3 + 0x220);
      *(undefined4 *)(param_2 + 0x230) = *(undefined4 *)(param_3 + 0x230);
      *(undefined4 *)(param_2 + 0x234) = *(undefined4 *)(param_3 + 0x234);
      *(undefined4 *)(param_2 + 0x238) = *(undefined4 *)(param_3 + 0x238);
      *(undefined4 *)(param_2 + 0x23c) = *(undefined4 *)(param_3 + 0x23c);
      *(undefined4 *)(param_2 + 0x240) = *(undefined4 *)(param_3 + 0x240);
      *(undefined4 *)(param_2 + 0x244) = *(undefined4 *)(param_3 + 0x244);
      *(undefined8 *)(param_2 + 600) = *(undefined8 *)(param_3 + 600);
      *(undefined8 *)(param_2 + 0x250) = *(undefined8 *)(param_3 + 0x250);
      *(undefined4 *)(param_2 + 0x260) = *(undefined4 *)(param_3 + 0x260);
      uVar4 = *(undefined4 *)(param_3 + 0x264);
    }
    else {
      fVar8 = *(float *)(param_4 + 0x204);
      fVar5 = (float)(**(code **)puVar3)(param_1);
      *(float *)(param_2 + 0x204) = fVar8 * fVar5 + 0.0;
      *(undefined8 *)(param_2 + 0x218) = *(undefined8 *)(param_4 + 0x218);
      *(undefined8 *)(param_2 + 0x210) = *(undefined8 *)(param_4 + 0x210);
      *(undefined8 *)(param_2 + 0x228) = *(undefined8 *)(param_4 + 0x228);
      *(undefined8 *)(param_2 + 0x220) = *(undefined8 *)(param_4 + 0x220);
      *(undefined4 *)(param_2 + 0x230) = *(undefined4 *)(param_4 + 0x230);
      *(undefined4 *)(param_2 + 0x234) = *(undefined4 *)(param_4 + 0x234);
      *(undefined4 *)(param_2 + 0x238) = *(undefined4 *)(param_4 + 0x238);
      *(undefined4 *)(param_2 + 0x23c) = *(undefined4 *)(param_4 + 0x23c);
      *(undefined4 *)(param_2 + 0x240) = *(undefined4 *)(param_4 + 0x240);
      *(undefined4 *)(param_2 + 0x244) = *(undefined4 *)(param_4 + 0x244);
      *(undefined8 *)(param_2 + 600) = *(undefined8 *)(param_4 + 600);
      *(undefined8 *)(param_2 + 0x250) = *(undefined8 *)(param_4 + 0x250);
      *(undefined4 *)(param_2 + 0x260) = *(undefined4 *)(param_4 + 0x260);
      uVar4 = *(undefined4 *)(param_4 + 0x264);
    }
    *(undefined4 *)(param_2 + 0x264) = uVar4;
  }
  return;
}


