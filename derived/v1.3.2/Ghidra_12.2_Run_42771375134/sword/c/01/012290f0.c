/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012290f0; name: FUN_012290f0
 */


void FUN_012290f0(undefined8 *param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  
  uVar9 = (param_3 - param_2 >> 3) * -0x3333333333333333;
  lVar4 = param_1[2];
  puVar7 = (undefined8 *)*param_1;
  if ((ulong)((lVar4 - (long)puVar7 >> 3) * -0x3333333333333333) < uVar9) {
    if (puVar7 != (undefined8 *)0x0) {
      puVar8 = (undefined8 *)param_1[1];
      if (puVar8 == puVar7) {
        puVar8 = puVar7;
      }
      else {
        do {
          puVar8 = puVar8 + -5;
          (**(code **)*puVar8)(puVar8);
        } while (puVar7 != puVar8);
        puVar8 = (undefined8 *)*param_1;
      }
      param_1[1] = puVar7;
      FUN_017cd7a0(puVar8);
      lVar4 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = 0;
    }
    uVar6 = 0x666666666666666;
    if (0x666666666666666 < uVar9) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    if ((ulong)((lVar4 >> 3) * -0x3333333333333333) < 0x333333333333333) {
      uVar5 = (lVar4 >> 3) * -0x6666666666666666;
      uVar6 = uVar9;
      if (uVar9 <= uVar5) {
        uVar6 = uVar5;
      }
    }
    plVar3 = (long *)FUN_017cd750(uVar6 * 0x28);
    param_1[2] = plVar3 + uVar6 * 5;
    *param_1 = plVar3;
    param_1[1] = plVar3;
    if (param_2 != param_3) {
      puVar1 = PTR_DAT_027167e8 + 0x10;
      do {
        *plVar3 = (long)puVar1;
        *(undefined1 *)(plVar3 + 1) = 0;
        plVar3[3] = (long)(plVar3 + 1);
        plVar3[4] = 0x10;
        FUN_017d05f0(plVar3,*(undefined8 *)(param_2 + 0x18),0xffffffffffffffff);
        param_2 = param_2 + 0x28;
        plVar3 = (long *)(param_1[1] + 0x28);
        param_1[1] = plVar3;
      } while (param_3 != param_2);
    }
  }
  else {
    uVar6 = (param_1[1] - (long)puVar7 >> 3) * -0x3333333333333333;
    lVar4 = param_2 + (param_1[1] - (long)puVar7);
    lVar2 = lVar4;
    if (uVar9 <= uVar6) {
      lVar2 = param_3;
    }
    while (lVar2 != param_2) {
      FUN_017cef10(puVar7,param_2);
      puVar7 = puVar7 + 5;
      param_2 = param_2 + 0x28;
    }
    if (uVar6 < uVar9) {
      if (lVar2 != param_3) {
        plVar3 = (long *)param_1[1];
        puVar1 = PTR_DAT_027167e8 + 0x10;
        do {
          *plVar3 = (long)puVar1;
          *(undefined1 *)(plVar3 + 1) = 0;
          plVar3[3] = (long)(plVar3 + 1);
          plVar3[4] = 0x10;
          FUN_017d05f0(plVar3,*(undefined8 *)(lVar4 + 0x18),0xffffffffffffffff);
          lVar4 = lVar4 + 0x28;
          plVar3 = (long *)(param_1[1] + 0x28);
          param_1[1] = plVar3;
        } while (param_3 != lVar4);
      }
    }
    else {
      puVar8 = (undefined8 *)param_1[1];
      while (puVar8 != puVar7) {
        puVar8 = puVar8 + -5;
        (**(code **)*puVar8)(puVar8);
      }
      param_1[1] = puVar7;
    }
  }
  return;
}


