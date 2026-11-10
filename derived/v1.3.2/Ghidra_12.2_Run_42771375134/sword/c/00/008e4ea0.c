/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e4ea0; name: FUN_008e4ea0
 */


undefined8 FUN_008e4ea0(long param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  short sVar4;
  undefined1 uVar5;
  ushort uVar6;
  undefined2 uVar7;
  uint uVar8;
  undefined8 uVar9;
  float fVar10;
  
  if (*(byte *)(param_1 + 0x7c) < 100) {
    uVar9 = *(undefined8 *)(param_1 + 0x60);
    uVar1 = *(int *)(param_1 + 0x6c) + param_2;
    uVar8 = FUN_008ec4a0(*(undefined2 *)(param_1 + 0x70),*(undefined1 *)(param_1 + 0x33d),
                         *(byte *)(param_1 + 0x7c) + 1);
    if (uVar1 < uVar8) {
      *(uint *)(param_1 + 0x6c) = uVar1;
      FUN_0087b2e0(uVar9,uVar1);
      uVar9 = 0;
    }
    else {
      sVar4 = *(short *)(param_1 + 0x72);
      uVar8 = FUN_0087f070(uVar9);
      cVar2 = *(char *)(param_1 + 0x298);
      FUN_008e1d70(param_1,param_1 + 700,uVar9);
      *(uint *)(param_1 + 0x6c) = uVar1;
      FUN_0087b2e0(uVar9,uVar1);
      if (cVar2 == '\0') {
        uVar6 = FUN_00879910(*(undefined8 *)(param_1 + 0x60),0);
        cVar3 = *(char *)(param_1 + 0x273);
      }
      else {
        uVar6 = FUN_00879f50();
        cVar3 = *(char *)(param_1 + 0x273);
      }
      if (cVar3 != '\0') {
        fVar10 = (float)FUN_008e5ec0(*(undefined8 *)(param_1 + 0x278));
        uVar6 = (ushort)(int)(fVar10 * (float)uVar6);
      }
      *(ushort *)(param_1 + 0x72) = uVar6;
      uVar5 = FUN_0087a5f0(uVar9);
      sVar4 = *(short *)(param_1 + 0x74) + (*(short *)(param_1 + 0x72) - sVar4);
      *(undefined1 *)(param_1 + 0x7c) = uVar5;
      *(short *)(param_1 + 0x74) = sVar4;
      FUN_0087b060(uVar9,sVar4);
      if ((*(byte *)(param_1 + 0x87) >> 5 & 1) == 0) {
        if (cVar2 == '\0') {
          uVar7 = FUN_00879910(*(undefined8 *)(param_1 + 0x60),1);
          *(undefined2 *)(param_1 + 0x2a2) = uVar7;
          uVar7 = FUN_00879910(*(undefined8 *)(param_1 + 0x60),2);
          *(undefined2 *)(param_1 + 0x2a4) = uVar7;
          uVar7 = FUN_00879910(*(undefined8 *)(param_1 + 0x60),3);
          *(undefined2 *)(param_1 + 0x2a6) = uVar7;
          uVar7 = FUN_00879910(*(undefined8 *)(param_1 + 0x60),4);
          *(undefined2 *)(param_1 + 0x2a8) = uVar7;
          uVar7 = FUN_00879910(*(undefined8 *)(param_1 + 0x60),5);
        }
        else {
          uVar7 = FUN_00879f50();
          *(undefined2 *)(param_1 + 0x2a2) = uVar7;
          uVar7 = FUN_00879f50(*(undefined8 *)(param_1 + 0x60),2);
          *(undefined2 *)(param_1 + 0x2a4) = uVar7;
          uVar7 = FUN_00879f50(*(undefined8 *)(param_1 + 0x60),3);
          *(undefined2 *)(param_1 + 0x2a6) = uVar7;
          uVar7 = FUN_00879f50(*(undefined8 *)(param_1 + 0x60),4);
          *(undefined2 *)(param_1 + 0x2a8) = uVar7;
          uVar7 = FUN_00879f50(*(undefined8 *)(param_1 + 0x60),5);
        }
        *(undefined2 *)(param_1 + 0x2aa) = uVar7;
      }
      FUN_008e0b70(param_1);
      FUN_0087f0c0(uVar9,uVar8 & 1);
      uVar9 = 1;
      *(byte *)(param_1 + 0x360) = *(byte *)(param_1 + 0x360) | 2;
    }
  }
  else {
    uVar9 = 0;
  }
  return uVar9;
}


