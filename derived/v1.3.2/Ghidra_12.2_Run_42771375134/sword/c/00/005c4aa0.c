/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005c4aa0; name: FUN_005c4aa0
 */


void FUN_005c4aa0(undefined8 *param_1,char *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  char *pcVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  char acStack_471 [1025];
  long *local_70;
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulong local_48;
  
  pcVar5 = acStack_471 + 1;
  if (param_2 == (char *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    lVar3 = FUN_005bc740();
    if (lVar3 == 0) {
      uVar2 = FUN_005bc6f0();
      *param_1 = uVar2;
      return;
    }
    uVar2 = FUN_005bc740();
    *param_1 = uVar2;
    return;
  }
  uVar7 = 0;
  do {
    uVar6 = uVar7;
    uVar7 = uVar6 + 1;
  } while (param_2[uVar6] != '\0');
  plVar1 = (long *)FUN_005bf860();
  local_70 = (long *)(**(code **)(*plVar1 + 0x60))();
  local_68 = 0;
  local_50 = 0;
  local_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  if (local_70 == (long *)0x0) {
    lVar3 = FUN_005bc740();
    if (lVar3 == 0) {
      local_70 = (long *)FUN_005bc6f0();
    }
    else {
      local_70 = (long *)FUN_005bc740();
    }
  }
  if (uVar6 + 1 == 1) goto LAB_005c4c84;
  if (uVar6 < 0x400) {
    cVar4 = *param_2;
    if (cVar4 != '\0') {
      uVar7 = 0;
      do {
        uVar6 = uVar7;
        if (0x3fe < uVar6) {
          pcVar5 = acStack_471 + uVar6;
          goto LAB_005c4c2c;
        }
        acStack_471[uVar6 + 1] = cVar4;
        cVar4 = param_2[uVar6 + 1];
        uVar7 = uVar6 + 1;
      } while (cVar4 != '\0');
      pcVar5 = acStack_471 + uVar6 + 2;
    }
LAB_005c4c2c:
    *pcVar5 = '\0';
    FUN_005c47b0(&local_70,acStack_471 + 1);
    goto LAB_005c4c84;
  }
  plVar1 = (long *)FUN_005bf860();
  plVar1 = (long *)(**(code **)(*plVar1 + 0x60))();
  if (plVar1 == (long *)0x0) {
    lVar3 = 0;
    cVar4 = *param_2;
    if (cVar4 != '\0') goto LAB_005c4bc4;
LAB_005c4c18:
    uVar8 = 0;
  }
  else {
    lVar3 = (**(code **)(*plVar1 + 0x40))
                      (plVar1,1,uVar6 + 2,0xffffffff,
                       "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiCore/Source/SiCore_String.cpp",
                       0x109);
    cVar4 = *param_2;
    if (cVar4 == '\0') goto LAB_005c4c18;
LAB_005c4bc4:
    uVar7 = 0;
    do {
      if (uVar6 < uVar7) {
        uVar8 = uVar7 - 1;
        break;
      }
      *(char *)(lVar3 + uVar7) = cVar4;
      uVar8 = uVar7 + 1;
      cVar4 = param_2[uVar7 + 1];
      uVar7 = uVar8;
    } while (cVar4 != '\0');
  }
  *(undefined1 *)(lVar3 + uVar8) = 0;
  FUN_005c47b0(&local_70,lVar3);
  plVar1 = (long *)FUN_005bf860();
  plVar1 = (long *)(**(code **)(*plVar1 + 0x60))();
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x48))
              (plVar1,lVar3,"C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiCore/Source/SiCore_String.cpp"
               ,0x10c);
  }
LAB_005c4c84:
  FUN_005c4670(param_1,&local_70,0);
  if ((((local_48 & 1) == 0) && (local_68 != 0)) && (local_70 != (long *)0x0)) {
    (**(code **)(*local_70 + 0x48))
              (local_70,local_68,"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
  }
  return;
}


