/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005519b0; name: FUN_005519b0
 */


void FUN_005519b0(undefined8 param_1,int *param_2,char *param_3,char *param_4,char *param_5,
                 int param_6,int param_7,int param_8)

{
  bool bVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  size_t sVar7;
  size_t sVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  char cVar12;
  char local_170 [4];
  char local_16c [268];
  
  if (param_3 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("delimiters","C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TFXString.cpp",0x2f4,
                  "Token");
  }
  if (param_6 < 0) {
    sVar7 = strlen(param_3);
    param_6 = (int)sVar7;
  }
  if ((param_4 != (char *)0x0) && (param_7 < 0)) {
    sVar7 = strlen(param_4);
    param_7 = (int)sVar7;
  }
  if (param_4 == (char *)0x0) {
    param_7 = 0;
  }
  if (0xff < param_7) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("commentLen < 256","C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TFXString.cpp",
                  0x2ff,"Token");
  }
  sVar7 = (size_t)param_7;
  local_16c[sVar7] = '\0';
  iVar4 = *param_2;
  if (iVar4 < 1) {
    iVar5 = 1;
  }
  else {
    iVar6 = 1;
    do {
      if (param_7 != 0) {
        memcpy(local_16c,(void *)(*(long *)(param_2 + 2) + (long)iVar6 + -1),sVar7);
        local_16c[sVar7] = '\0';
      }
      if (((param_4 == (char *)0x0) || (*param_4 == '\0')) ||
         (iVar5 = strcmp(local_16c,param_4), iVar5 != 0)) {
        if (param_6 < 1) {
LAB_00551b4c:
          iVar5 = iVar6;
          break;
        }
        if (iVar6 < 1) {
          lVar9 = 0;
          while (param_3[lVar9] != '\0') {
            lVar9 = lVar9 + 1;
            if (param_6 <= lVar9) goto LAB_00551b4c;
          }
        }
        else {
          lVar9 = 0;
          while (*(char *)(*(long *)(param_2 + 2) + (long)iVar6 + -1) != param_3[lVar9]) {
            lVar9 = lVar9 + 1;
            if (param_6 <= lVar9) goto LAB_00551b4c;
          }
        }
      }
      else {
        if (iVar4 < iVar6 + param_7) {
LAB_00551e20:
          iVar5 = iVar4 + 1;
          break;
        }
        lVar9 = (long)(iVar6 + param_7) + -1;
        iVar5 = param_7 + 1 + iVar6;
        while (*(char *)(*(long *)(param_2 + 2) + lVar9) != '\n') {
          lVar9 = lVar9 + 1;
          iVar5 = iVar5 + 1;
          if (iVar4 <= lVar9) goto LAB_00551e20;
        }
        iVar6 = iVar4;
        if (iVar5 != 1) {
          iVar6 = iVar5;
        }
      }
      iVar5 = iVar6 + 1;
      bVar1 = iVar6 < iVar4;
      iVar6 = iVar5;
    } while (bVar1);
  }
  FUN_00551eb0(param_2,iVar5,iVar4);
  local_16c[sVar7] = '\0';
  if ((param_5 != (char *)0x0) && (param_8 < 0)) {
    sVar8 = strlen(param_5);
    param_8 = (int)sVar8;
  }
  iVar4 = *param_2;
  if (param_5 == (char *)0x0) {
    param_8 = 0;
  }
  if (param_8 < 1) {
    bVar1 = false;
  }
  else if (iVar4 < 1) {
    lVar9 = 0;
    bVar1 = false;
    do {
      pcVar3 = param_5 + lVar9;
      if (*pcVar3 == '\0') {
        cVar12 = '\0';
        goto joined_r0x00551e18;
      }
      lVar9 = lVar9 + 1;
      bVar1 = (bool)(bVar1 | *pcVar3 == '\0');
    } while (lVar9 < param_8);
  }
  else {
    cVar12 = **(char **)(param_2 + 2);
    lVar9 = 0;
    bVar1 = false;
    do {
      if (cVar12 == param_5[lVar9]) goto joined_r0x00551e18;
      lVar9 = lVar9 + 1;
    } while (lVar9 < param_8);
  }
  cVar12 = '\0';
joined_r0x00551e18:
  if (iVar4 < 2) {
    iVar5 = 2;
  }
  else {
    iVar5 = 2;
    lVar9 = 2;
    if (param_7 == 0) {
      do {
        if ((!bVar1) || (*(char *)(*(long *)(param_2 + 2) + lVar9 + -1) == cVar12)) {
          if (((param_4 != (char *)0x0) && (*param_4 != '\0')) &&
             (iVar6 = strcmp(local_16c,param_4), iVar6 == 0)) goto LAB_00551d88;
          if (0 < param_6) {
            lVar11 = 0;
            do {
              if (*(char *)(*(long *)(param_2 + 2) + lVar9 + -1) == param_3[lVar11])
              goto LAB_00551d88;
              lVar11 = lVar11 + 1;
            } while (lVar11 < param_6);
          }
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        iVar5 = iVar5 + 1;
        bVar2 = lVar9 < iVar4;
        lVar9 = lVar9 + 1;
      } while (bVar2);
    }
    else {
      do {
        if ((!bVar1) || (*(char *)(*(long *)(param_2 + 2) + lVar9 + -1) == cVar12)) {
          lVar11 = *(long *)(param_2 + 2) + lVar9;
          memcpy(local_16c,(void *)(lVar11 + -1),sVar7);
          local_16c[sVar7] = '\0';
          if (((param_4 != (char *)0x0) && (*param_4 != '\0')) &&
             (iVar6 = strcmp(local_16c,param_4), iVar6 == 0)) goto LAB_00551d88;
          if (0 < param_6) {
            lVar10 = 0;
            do {
              if (*(char *)(lVar11 + -1) == param_3[lVar10]) goto LAB_00551d88;
              lVar10 = lVar10 + 1;
            } while (lVar10 < param_6);
          }
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        iVar5 = iVar5 + 1;
        bVar2 = lVar9 < iVar4;
        lVar9 = lVar9 + 1;
      } while (bVar2);
    }
  }
joined_r0x00551bfc:
  if (iVar4 < 1) {
    FUN_00550fe0(param_1,&DAT_01d38550);
  }
  else {
    if (iVar5 + -1 <= iVar4) {
      iVar4 = iVar5 + -1;
    }
    FUN_00551100(param_1,*(undefined8 *)(param_2 + 2),iVar4,iVar4);
  }
  FUN_00551eb0(param_2,iVar5,*param_2);
  if (cVar12 != '\0') {
    local_170[1] = 0;
    local_170[0] = cVar12;
    FUN_00551fb0(param_1,local_170);
  }
  return;
joined_r0x00551e18:
  bVar1 = true;
  goto joined_r0x00551e18;
LAB_00551d88:
  iVar5 = (int)lVar9;
  goto joined_r0x00551bfc;
}


