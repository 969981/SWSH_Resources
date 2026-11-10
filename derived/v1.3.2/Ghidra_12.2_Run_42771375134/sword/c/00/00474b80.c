/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00474b80; name: FUN_00474b80
 */


/* WARNING: Removing unreachable block (ram,0x00474c44) */

undefined8 FUN_00474b80(undefined8 param_1,int *param_2,undefined8 *param_3,long param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  void *__dest;
  void *__src;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  
  puVar7 = (undefined8 *)*param_3;
  if (puVar7 == (undefined8 *)0x0) {
LAB_00474c48:
    puVar2 = PTR_DAT_02712a90;
    puVar6 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x38);
    if (puVar6 == (undefined8 *)0x0) {
      return 0x34;
    }
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    lVar8 = FUN_00404750(*(undefined4 *)puVar2,0x300,0x10);
    puVar6[1] = lVar8;
    if (lVar8 == 0) {
LAB_00474cd0:
      uVar1 = *(undefined4 *)puVar2;
      if (puVar6[6] != 0) {
        FUN_004047f0(uVar1);
      }
      *(undefined4 *)((long)puVar6 + 0x2c) = 0;
      puVar6[6] = 0;
      if (puVar6[1] != 0) {
        *(undefined4 *)(puVar6 + 2) = 0;
        FUN_004047f0(*(undefined4 *)puVar2);
        puVar6[1] = 0;
        *(undefined4 *)((long)puVar6 + 0x14) = 0;
      }
      if (puVar6[3] != 0) {
        *(undefined4 *)(puVar6 + 4) = 0;
        FUN_004047f0(*(undefined4 *)puVar2);
        puVar6[3] = 0;
        *(undefined4 *)((long)puVar6 + 0x24) = 0;
      }
      FUN_00404870(uVar1,puVar6);
      return 0x34;
    }
    *(undefined4 *)((long)puVar6 + 0x14) = 0x10;
    lVar8 = FUN_00404750(*(undefined4 *)puVar2,0x180,0x10);
    puVar6[3] = lVar8;
    if (lVar8 == 0) goto LAB_00474cd0;
    *(undefined4 *)((long)puVar6 + 0x24) = 0x10;
    *puVar6 = 0;
    if (*(long *)(param_2 + 4) == 0) {
      *(undefined8 **)(param_2 + 4) = puVar6;
    }
    else {
      **(undefined8 **)(param_2 + 2) = puVar6;
    }
    *(undefined8 **)(param_2 + 2) = puVar6;
    *param_2 = *param_2 + 1;
    *param_3 = puVar6;
    param_3[1] = puVar7;
    uVar3 = *(uint *)(puVar6 + 2);
    uVar5 = *(uint *)((long)puVar6 + 0x14);
    if (uVar3 < uVar5) goto LAB_00474dec;
  }
  else {
    puVar6 = puVar7;
    if (*(int *)(puVar7 + 2) == *(int *)((long)puVar7 + 0x14)) {
      param_3[1] = puVar7;
      puVar6 = (undefined8 *)*puVar7;
      *param_3 = puVar6;
      if (puVar6 == (undefined8 *)0x0) goto LAB_00474c48;
    }
    uVar3 = *(uint *)(puVar6 + 2);
    uVar5 = *(uint *)((long)puVar6 + 0x14);
    if (uVar3 < uVar5) goto LAB_00474dec;
  }
  puVar2 = PTR_DAT_02712a90;
  __dest = (void *)FUN_00404750(*(undefined4 *)PTR_DAT_02712a90,(ulong)(uVar5 + 1) * 0x30,0x10);
  __src = (void *)puVar6[1];
  if ((__src != (void *)0x0) && (__src != __dest)) {
    uVar3 = *(uint *)(puVar6 + 2);
    if (uVar3 != 0) {
      memcpy(__dest,__src,0x30);
      if (uVar3 != 1) {
        if (uVar3 == 2) {
          lVar8 = 1;
        }
        else {
          lVar9 = 0;
          lVar8 = 1;
          do {
            memcpy((void *)((long)__dest + lVar9 + 0x30),(void *)(puVar6[1] + lVar9 + 0x30),0x30);
            memcpy((void *)((long)__dest + lVar9 + 0x60),(void *)(puVar6[1] + lVar9 + 0x60),0x30);
            lVar8 = lVar8 + 2;
            lVar9 = lVar9 + 0x60;
          } while ((ulong)uVar3 - (ulong)(~uVar3 & 1) != lVar8);
          if ((~uVar3 & 1) == 0) goto LAB_00474dd4;
        }
        memcpy((void *)((long)__dest + lVar8 * 0x30),(void *)(puVar6[1] + lVar8 * 0x30),0x30);
      }
LAB_00474dd4:
      __src = (void *)puVar6[1];
    }
    FUN_004047f0(*(undefined4 *)puVar2,__src);
  }
  uVar3 = *(uint *)(puVar6 + 2);
  puVar6[1] = __dest;
  *(uint *)((long)puVar6 + 0x14) = uVar5 + 1;
LAB_00474dec:
  *(uint *)(puVar6 + 2) = uVar3 + 1;
  puVar4 = (undefined4 *)(puVar6[1] + (ulong)uVar3 * 0x30);
  puVar4[6] = *(undefined4 *)(param_4 + 0x98);
  puVar4[7] = *(undefined4 *)(param_4 + 0x9c);
  puVar4[8] = *(undefined4 *)(param_4 + 0xa0);
  puVar4[9] = *(undefined4 *)(param_4 + 0xa4);
  puVar4[10] = *(undefined4 *)(param_4 + 0xa8);
  puVar4[0xb] = *(undefined4 *)(param_4 + 0xac);
  *puVar4 = *(undefined4 *)(param_4 + 0x68);
  puVar4[3] = *(undefined4 *)(param_4 + 0x60);
  puVar4[2] = *(undefined4 *)(param_4 + 0x5c);
  puVar4[1] = *(undefined4 *)(param_4 + 0x58);
  puVar4[4] = *(undefined4 *)(param_4 + 0x70);
  puVar4[5] = *(undefined4 *)(param_4 + 0x78);
  return 1;
}


