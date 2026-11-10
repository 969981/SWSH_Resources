/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003a9630; name: FUN_003a9630
 */


void FUN_003a9630(long param_1,int *param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  FUN_003ba290(param_1,*param_2,1,0,0,0);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0x3a83126f00000000;
  *(undefined2 *)(param_1 + 0x88) = 9;
  uVar3 = 0x36;
  if ((param_4 & 1) == 0) {
    uVar3 = 0x26;
  }
  *(uint *)(param_1 + 0x4c) = uVar3;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (*param_2 == 2) {
    *(undefined8 *)(param_1 + 0x38) = 0x3f8000003d75c28f;
                    /* try { // try from 003a96b4 to 003a9783 has its CatchHandler @ 003a97f8 */
    uVar1 = FUN_003a93c0(DAT_01d4be64,DAT_01d4bf28);
    uVar8 = 0;
    uVar9 = 0;
    uVar10 = 0;
  }
  else {
    *(uint *)(param_1 + 0x4c) = uVar3 | 0x10000;
    *(undefined8 *)(param_1 + 0x38) = 0x400000003ca3d70a;
    uVar1 = FUN_003a93c0(DAT_01d4be64,DAT_01d4c274);
    uVar9 = 0x40c00000;
    uVar8 = 0x41a00000;
    uVar10 = DAT_01d4bec0;
  }
  *(undefined8 *)(param_1 + 0x6c) = 0x3b83126f3d75c28f;
  *(undefined8 *)(param_1 + 0x74) = 0x3c03126f;
  *(undefined8 *)(param_1 + 0x54) = 0x3d4ccccd3f000000;
  *(undefined8 *)(param_1 + 0x7c) = 0x3f80000000000000;
  uVar3 = param_3;
  if (0xfffffffd < param_3) {
    uVar3 = 0xfffffffe;
  }
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  *(undefined4 *)(param_1 + 0x68) = uVar8;
  *(undefined4 *)(param_1 + 0x40) = uVar9;
  *(undefined4 *)(param_1 + 0x60) = uVar10;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  lVar2 = FUN_001969c0(uVar3,param_4 & 1);
  *(long *)(param_1 + 0x10) = lVar2;
  if ((uVar3 != 0) && ((param_4 & 1) != 0)) {
    puVar4 = *(undefined8 **)(lVar2 + 0x40);
    uVar7 = 1;
    if (1 < ~param_3) {
      uVar7 = ~param_3;
    }
    uVar3 = uVar3 & 3;
    if (2 < -uVar7 - 2) {
      uVar7 = 1;
      if (1 < ~param_3) {
        uVar7 = ~param_3;
      }
      iVar6 = uVar7 + uVar3 + 1;
      puVar5 = puVar4;
      do {
        puVar4 = puVar5 + 2;
        *puVar5 = 0;
        puVar5[1] = 0;
        iVar6 = iVar6 + 4;
        puVar5 = puVar4;
      } while (iVar6 != 0);
    }
    if (uVar3 != 0) {
      iVar6 = -uVar3;
      do {
        iVar6 = iVar6 + 1;
        *(undefined4 *)puVar4 = 0;
        puVar4 = (undefined8 *)((long)puVar4 + 4);
      } while (iVar6 != 0);
    }
  }
  return;
}


