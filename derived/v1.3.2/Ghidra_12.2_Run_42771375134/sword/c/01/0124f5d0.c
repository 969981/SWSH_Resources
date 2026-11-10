/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0124f5d0; name: FUN_0124f5d0
 */


void FUN_0124f5d0(long *param_1,long param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  
  lVar4 = param_1[1] - *param_1 >> 5;
  uVar8 = 0x2aaaaaaaaaaaaaa;
  uVar1 = lVar4 * -0x5555555555555555 + 1;
  if (0x2aaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar5 = param_1[2] - *param_1 >> 5;
  if ((ulong)(lVar5 * -0x5555555555555555) < 0x155555555555555) {
    uVar6 = lVar5 * 0x5555555555555556;
    uVar8 = uVar1;
    if (uVar1 <= uVar6) {
      uVar8 = uVar6;
    }
    if (uVar8 == 0) {
      lVar5 = 0;
      goto LAB_0124f660;
    }
  }
  lVar5 = FUN_017cd750(uVar8 * 0x60);
LAB_0124f660:
  plVar10 = (long *)(lVar5 + lVar4 * 0x20);
  lVar5 = lVar5 + uVar8 * 0x60;
  puVar2 = PTR_DAT_027265e8 + 0x10;
  *plVar10 = (long)puVar2;
  *(undefined1 *)(plVar10 + 1) = *(undefined1 *)(param_2 + 8);
  plVar10[2] = *(long *)(param_2 + 0x10);
  *(undefined4 *)(plVar10 + 3) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)((long)plVar10 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(plVar10 + 4) = *(undefined4 *)(param_2 + 0x20);
  FUN_017e3640(plVar10 + 5,param_2 + 0x28);
  puVar3 = PTR_DAT_02726738 + 0x10;
  *plVar10 = (long)puVar3;
  puVar9 = (undefined8 *)*param_1;
  puVar7 = (undefined8 *)param_1[1];
  if (puVar7 == puVar9) {
    *param_1 = (long)plVar10;
    param_1[1] = (long)(plVar10 + 0xc);
    param_1[2] = lVar5;
  }
  else {
    lVar4 = 0;
    do {
      *(undefined **)((long)plVar10 + lVar4 + -0x60) = puVar2;
      *(undefined1 *)((long)plVar10 + lVar4 + -0x58) = *(undefined1 *)((long)puVar7 + lVar4 + -0x58)
      ;
      *(undefined8 *)((long)plVar10 + lVar4 + -0x50) = *(undefined8 *)((long)puVar7 + lVar4 + -0x50)
      ;
      *(undefined4 *)((long)plVar10 + lVar4 + -0x48) = *(undefined4 *)((long)puVar7 + lVar4 + -0x48)
      ;
      *(undefined4 *)((long)plVar10 + lVar4 + -0x44) = *(undefined4 *)((long)puVar7 + lVar4 + -0x44)
      ;
      *(undefined4 *)((long)plVar10 + lVar4 + -0x40) = *(undefined4 *)((long)puVar7 + lVar4 + -0x40)
      ;
      FUN_017e3640((long)plVar10 + lVar4 + -0x38,(long)puVar7 + lVar4 + -0x38);
      lVar11 = lVar4 + -0x60;
      *(undefined **)((long)plVar10 + lVar4 + -0x60) = puVar3;
      lVar4 = lVar11;
    } while ((long)puVar9 - (long)puVar7 != lVar11);
    puVar9 = (undefined8 *)*param_1;
    puVar7 = (undefined8 *)param_1[1];
    *param_1 = (long)plVar10 + lVar11;
    param_1[1] = (long)(plVar10 + 0xc);
    param_1[2] = lVar5;
    while (puVar7 != puVar9) {
      puVar7 = puVar7 + -0xc;
      (**(code **)*puVar7)(puVar7);
    }
  }
  if (puVar9 == (undefined8 *)0x0) {
    return;
  }
  FUN_017cd7a0(puVar9);
  return;
}


