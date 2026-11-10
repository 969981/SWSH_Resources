/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007fed10; name: FUN_007fed10
 */


void FUN_007fed10(string *param_1,string *param_2,long param_3)

{
  ulong *puVar1;
  string sVar2;
  string *psVar3;
  size_t sVar4;
  void *pvVar5;
  string *psVar6;
  size_t sVar7;
  string *psVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  string *psVar12;
  string *psVar13;
  ulong local_78;
  ulong local_70;
  void *local_68;
  
  sVar2 = *param_2;
  if ((sVar2 == (string)0x0) || (param_2[1] != (string)0x0)) {
    sVar2 = *param_1;
    uVar9 = *(ulong *)(param_1 + 8);
    psVar8 = *(string **)(param_1 + 0x10);
    if (((byte)sVar2 & 1) == 0) {
      uVar10 = (ulong)((byte)sVar2 >> 1);
      psVar13 = param_1 + 1;
    }
    else {
      uVar10 = uVar9;
      psVar13 = psVar8;
    }
    sVar4 = strlen((char *)param_2);
    if (uVar10 != 0) {
      psVar6 = psVar13;
      if (sVar4 == 0) {
LAB_007feda0:
        uVar10 = (long)psVar6 - (long)psVar13;
        if (uVar10 != 0xffffffffffffffff) {
          while( true ) {
            psVar13 = param_1 + 1;
            uVar11 = (ulong)((byte)sVar2 >> 1);
            if (((byte)sVar2 & 1) != 0) {
              psVar13 = psVar8;
              uVar11 = uVar9;
            }
            sVar4 = strlen((char *)param_2);
            if ((sVar4 == 0) || (uVar11 <= uVar10)) break;
            psVar6 = psVar13 + uVar10;
LAB_007fede4:
            sVar7 = 0;
            while (*psVar6 != param_2[sVar7]) {
              sVar7 = sVar7 + 1;
              if (sVar4 == sVar7) goto code_r0x007fee04;
            }
            if ((psVar6 == psVar13 + uVar11) ||
               (uVar11 = (long)psVar6 - (long)psVar13, uVar11 == 0xffffffffffffffff)) break;
            std::string::string((string *)&local_78,param_1,uVar10,uVar11 - uVar10,
                                (allocator *)param_1);
            puVar1 = *(ulong **)(param_3 + 8);
            if (puVar1 < *(ulong **)(param_3 + 0x10)) {
              puVar1[1] = local_70;
              puVar1[2] = (ulong)local_68;
              *puVar1 = local_78;
              local_70 = 0;
              local_68 = (void *)0x0;
              local_78 = 0;
              *(long *)(param_3 + 8) = *(long *)(param_3 + 8) + 0x18;
            }
            else {
              FUN_007f85f0(param_3,&local_78);
              if ((local_78 & 1) != 0) {
                operator_delete(local_68);
              }
            }
            sVar2 = *param_1;
            uVar9 = *(ulong *)(param_1 + 8);
            psVar8 = *(string **)(param_1 + 0x10);
            uVar10 = (ulong)((byte)sVar2 >> 1);
            psVar3 = param_1 + 1;
            if (((byte)sVar2 & 1) != 0) {
              uVar10 = uVar9;
              psVar3 = psVar8;
            }
            sVar4 = strlen((char *)param_2);
            if (uVar10 <= uVar11) {
              return;
            }
            psVar12 = psVar3 + uVar11;
            if (sVar4 != 0) {
              psVar13 = psVar13 + (uVar10 - (long)psVar6);
              while (pvVar5 = memchr(param_2,(uint)(byte)*psVar12,sVar4), pvVar5 != (void *)0x0) {
                psVar12 = psVar12 + 1;
                psVar13 = psVar13 + -1;
                if (psVar13 == (string *)0x0) {
                  return;
                }
              }
            }
            uVar10 = (long)psVar12 - (long)psVar3;
            if (uVar10 == 0xffffffffffffffff) {
              return;
            }
          }
LAB_007ff064:
          std::string::string((string *)&local_78,param_1,uVar10,0xffffffffffffffff,
                              (allocator *)param_1);
          puVar1 = *(ulong **)(param_3 + 8);
          if (puVar1 < *(ulong **)(param_3 + 0x10)) {
            puVar1[1] = local_70;
            puVar1[2] = (ulong)local_68;
            *puVar1 = local_78;
            *(long *)(param_3 + 8) = *(long *)(param_3 + 8) + 0x18;
          }
          else {
            FUN_007f85f0(param_3,&local_78);
            if ((local_78 & 1) != 0) {
              operator_delete(local_68);
            }
          }
        }
      }
      else {
        do {
          pvVar5 = memchr(param_2,(uint)(byte)*psVar6,sVar4);
          if (pvVar5 == (void *)0x0) goto LAB_007feda0;
          psVar6 = psVar6 + 1;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
    }
  }
  else {
    uVar9 = *(ulong *)(param_1 + 8);
    psVar8 = *(string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      psVar8 = param_1 + 1;
      uVar9 = (ulong)((byte)*param_1 >> 1);
    }
    if (uVar9 != 0) {
      psVar13 = psVar8 + uVar9;
LAB_007fef34:
      do {
        psVar6 = psVar8;
        if (*psVar8 == sVar2) {
          psVar6 = psVar8 + 1;
        }
        else {
          do {
            psVar6 = psVar6 + 1;
            if (psVar13 == psVar6) {
              psVar6 = psVar13;
              goto LAB_007fef78;
            }
          } while (*psVar6 != sVar2);
LAB_007fef78:
          uVar9 = (long)psVar6 - (long)psVar8;
          local_78 = 0;
          local_70 = 0;
          local_68 = (void *)0x0;
          if (0xffffffffffffffef < uVar9) {
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          if (uVar9 < 0x17) {
            local_78 = (ulong)(byte)((int)uVar9 << 1);
            pvVar5 = (void *)((ulong)&local_78 | 1);
            if (uVar9 != 0) goto LAB_007fefc8;
          }
          else {
            uVar10 = uVar9 + 0x10 & 0xfffffffffffffff0;
            pvVar5 = operator_new(uVar10);
            local_78 = uVar10 | 1;
            local_70 = uVar9;
            local_68 = pvVar5;
LAB_007fefc8:
            memcpy(pvVar5,psVar8,uVar9);
          }
          *(undefined1 *)((long)pvVar5 + uVar9) = 0;
          puVar1 = *(ulong **)(param_3 + 8);
          if (puVar1 < *(ulong **)(param_3 + 0x10)) {
            puVar1[1] = local_70;
            puVar1[2] = (ulong)local_68;
            *puVar1 = local_78;
            *(long *)(param_3 + 8) = *(long *)(param_3 + 8) + 0x18;
            psVar8 = psVar6;
            if (psVar6 == psVar13) {
              return;
            }
            goto LAB_007fef34;
          }
          FUN_007f85f0(param_3,&local_78);
          if ((local_78 & 1) != 0) {
            operator_delete(local_68);
          }
        }
        psVar8 = psVar6;
        if (psVar6 == psVar13) {
          return;
        }
      } while( true );
    }
  }
  return;
code_r0x007fee04:
  psVar6 = psVar6 + 1;
  if (psVar6 == psVar13 + uVar11) goto LAB_007ff064;
  goto LAB_007fede4;
}


