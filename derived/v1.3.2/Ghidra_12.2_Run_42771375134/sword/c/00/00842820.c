/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00842820; name: FUN_00842820
 */


void FUN_00842820(long param_1,byte *param_2)

{
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *local_80;
  ulong local_78;
  undefined8 local_70;
  char *local_68;
  
  uVar1 = *(undefined4 *)(param_1 + 0x8c);
  iVar2 = *(int *)(param_1 + 0x90);
  if (param_2 == (byte *)0x0) {
LAB_00842a44:
    do {
      bVar3 = *(byte *)(param_1 + 0x70);
      if (0x29 < bVar3) {
        if (bVar3 == 0x2a) {
          FUN_00841d30(param_1);
          cVar8 = *(char *)(param_1 + 0x70);
          if (cVar8 == '/') goto LAB_00842c50;
        }
        else {
          if (bVar3 != 0x2f) goto LAB_00842a3c;
          FUN_00841d30(param_1);
          cVar8 = *(char *)(param_1 + 0x70);
          if (cVar8 == '*') {
            local_68 = operator_new(0x40);
            local_78 = 0x41;
            local_68[0x38] = 't';
            uVar4 = s______inside_block_comment__Block_01cddf4c._8_8_;
            local_68[0x39] = 'e';
            local_68[0x3a] = 'd';
            local_68[0x3b] = '.';
            *(undefined8 *)local_68 = s______inside_block_comment__Block_01cddf4c._0_8_;
            uVar6 = s______inside_block_comment__Block_01cddf4c._24_8_;
            uVar5 = s______inside_block_comment__Block_01cddf4c._16_8_;
            local_68[0x3c] = '\0';
            *(undefined8 *)(local_68 + 8) = uVar4;
            *(undefined8 *)(local_68 + 0x10) = uVar5;
            uVar5 = s______inside_block_comment__Block_01cddf4c._48_8_;
            uVar4 = s______inside_block_comment__Block_01cddf4c._32_8_;
            local_70 = 0x3c;
            *(undefined8 *)(local_68 + 0x28) = s______inside_block_comment__Block_01cddf4c._40_8_;
            *(undefined8 *)(local_68 + 0x30) = uVar5;
            *(undefined8 *)(local_68 + 0x18) = uVar6;
            *(undefined8 *)(local_68 + 0x20) = uVar4;
            (**(code **)(**(long **)(param_1 + 0x68) + 0x10))
                      (*(long **)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x8c),
                       *(undefined4 *)(param_1 + 0x90),&local_78);
            if ((local_78 & 1) != 0) {
              operator_delete(local_68);
            }
            goto LAB_00842a44;
          }
        }
LAB_00842b3c:
        if (cVar8 == '\0') goto LAB_00842b40;
        goto LAB_00842a44;
      }
      cVar8 = '\0';
      if (bVar3 == 0) goto LAB_00842b3c;
      if (bVar3 == 10) {
        do {
          FUN_00841d30(param_1);
          bVar3 = *(byte *)(param_1 + 0x70);
          if (0x2a < bVar3) goto LAB_00842a44;
        } while ((1L << ((ulong)bVar3 & 0x3f) & 0x100003a00U) != 0);
        if (((ulong)bVar3 == 0x2a) && (FUN_00841d30(param_1), *(char *)(param_1 + 0x70) == '/')) {
LAB_00842ca4:
          FUN_00841d30(param_1);
          return;
        }
      }
      else {
LAB_00842a3c:
        FUN_00841d30(param_1);
      }
    } while( true );
  }
  puVar11 = (undefined8 *)(param_1 + 0x98);
  *puVar11 = param_2;
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0x84);
LAB_008428a8:
  do {
    bVar3 = *(byte *)(param_1 + 0x70);
    if (bVar3 < 0x2a) {
      cVar8 = '\0';
      if (bVar3 != 0) {
        if (bVar3 == 10) {
          FUN_00841d30(param_1);
          if (*(int *)(param_1 + 0x84) != *(int *)(param_1 + 0xa0)) {
            std::string::append((char *)*puVar11,
                                *(long *)(param_1 + 0x78) + (long)*(int *)(param_1 + 0xa0));
          }
          *puVar11 = 0;
          *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
          bVar3 = *(byte *)(param_1 + 0x70);
          while (bVar3 < 0x2b) {
            if ((1L << ((ulong)bVar3 & 0x3f) & 0x100003a00U) == 0) {
              if (((ulong)bVar3 == 0x2a) &&
                 (FUN_00841d30(param_1), *(char *)(param_1 + 0x70) == '/')) goto LAB_00842ca4;
              break;
            }
            FUN_00841d30(param_1);
            bVar3 = *(byte *)(param_1 + 0x70);
          }
          *puVar11 = param_2;
          *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0x84);
        }
        else {
LAB_008428a0:
          FUN_00841d30(param_1);
        }
        goto LAB_008428a8;
      }
    }
    else if (bVar3 == 0x2a) {
      FUN_00841d30(param_1);
      cVar8 = *(char *)(param_1 + 0x70);
      if (cVar8 == '/') {
LAB_00842c50:
        local_80 = (long *)(param_1 + 0x78);
        FUN_00841d30(param_1);
        if (param_2 == (byte *)0x0) {
          return;
        }
        iVar2 = *(int *)(param_1 + 0xa0);
        if (*(int *)(param_1 + 0x84) != iVar2) {
          std::string::append(*(char **)(param_1 + 0x98),*local_80 + (long)iVar2);
        }
        *(undefined8 *)(param_1 + 0x98) = 0;
        *(int *)(param_1 + 0xa0) = -1;
        if ((*param_2 & 1) == 0) {
          uVar9 = (ulong)(*param_2 >> 1);
        }
        else {
          uVar9 = *(ulong *)(param_2 + 8);
        }
        std::string::erase((ulong)param_2,uVar9 - 2);
        return;
      }
    }
    else {
      if (bVar3 != 0x2f) goto LAB_008428a0;
      FUN_00841d30(param_1);
      cVar8 = *(char *)(param_1 + 0x70);
      if (cVar8 == '*') {
        local_68 = operator_new(0x40);
        uVar6 = s______inside_block_comment__Block_01cddf4c._24_8_;
        uVar5 = s______inside_block_comment__Block_01cddf4c._16_8_;
        local_78 = 0x41;
        local_68[0x38] = 't';
        uVar4 = s______inside_block_comment__Block_01cddf4c._8_8_;
        local_68[0x39] = 'e';
        local_68[0x3a] = 'd';
        local_68[0x3b] = '.';
        local_70 = 0x3c;
        *(undefined8 *)local_68 = s______inside_block_comment__Block_01cddf4c._0_8_;
        *(undefined8 *)(local_68 + 8) = uVar4;
        *(undefined8 *)(local_68 + 0x10) = uVar5;
        uVar7 = s______inside_block_comment__Block_01cddf4c._48_8_;
        uVar5 = s______inside_block_comment__Block_01cddf4c._40_8_;
        uVar4 = s______inside_block_comment__Block_01cddf4c._32_8_;
        local_68[0x3c] = '\0';
        *(undefined8 *)(local_68 + 0x28) = uVar5;
        *(undefined8 *)(local_68 + 0x30) = uVar7;
        *(undefined8 *)(local_68 + 0x18) = uVar6;
        *(undefined8 *)(local_68 + 0x20) = uVar4;
        (**(code **)(**(long **)(param_1 + 0x68) + 0x10))
                  (*(long **)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x8c),
                   *(undefined4 *)(param_1 + 0x90),&local_78);
        if ((local_78 & 1) != 0) {
          operator_delete(local_68);
        }
        goto LAB_008428a8;
      }
    }
    if (cVar8 == '\0') {
LAB_00842b40:
      local_80 = (long *)(param_1 + 0x78);
      local_68 = operator_new(0x30);
      uVar7 = s_End_of_file_inside_block_comment_01d302aa._24_8_;
      uVar6 = s_End_of_file_inside_block_comment_01d302aa._16_8_;
      uVar5 = s_End_of_file_inside_block_comment_01d302aa._8_8_;
      uVar4 = s_End_of_file_inside_block_comment_01d302aa._0_8_;
      local_78 = 0x31;
      local_70 = 0x21;
      local_68[0x21] = '\0';
      *(undefined8 *)(local_68 + 0x10) = uVar6;
      *(undefined8 *)(local_68 + 0x18) = uVar7;
      *(undefined8 *)local_68 = uVar4;
      *(undefined8 *)(local_68 + 8) = uVar5;
      local_68[0x20] = '.';
      (**(code **)(**(long **)(param_1 + 0x68) + 0x10))
                (*(long **)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x8c),
                 *(undefined4 *)(param_1 + 0x90),&local_78);
      if ((local_78 & 1) != 0) {
        operator_delete(local_68);
      }
      plVar10 = *(long **)(param_1 + 0x68);
      local_68 = operator_new(0x20);
      uVar5 = s_Comment_started_here__01d33a4c._0_8_;
      local_78 = 0x21;
      local_70 = 0x17;
      uVar4 = CONCAT17(s_Comment_started_here__01d33a4c[0xf],s_Comment_started_here__01d33a4c._8_7_)
      ;
      *(ulong *)(local_68 + 0xf) =
           CONCAT71(s_Comment_started_here__01d33a4c._16_7_,s_Comment_started_here__01d33a4c[0xf]);
      local_68[0x17] = '\0';
      *(undefined8 *)local_68 = uVar5;
      *(undefined8 *)(local_68 + 8) = uVar4;
      (**(code **)(*plVar10 + 0x10))(plVar10,uVar1,iVar2 + -2,&local_78);
      if ((local_78 & 1) != 0) {
        operator_delete(local_68);
      }
      if (param_2 != (byte *)0x0) {
        iVar2 = *(int *)(param_1 + 0xa0);
        if (*(int *)(param_1 + 0x84) != iVar2) {
          std::string::append(*(char **)(param_1 + 0x98),*local_80 + (long)iVar2);
        }
        *(undefined8 *)(param_1 + 0x98) = 0;
        *(int *)(param_1 + 0xa0) = -1;
      }
      return;
    }
  } while( true );
}


