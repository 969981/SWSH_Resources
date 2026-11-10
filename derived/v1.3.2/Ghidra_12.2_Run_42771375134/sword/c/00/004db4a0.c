/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004db4a0; name: FUN_004db4a0
 */


/* WARNING: Removing unreachable block (ram,0x004db6cc) */
/* WARNING: Removing unreachable block (ram,0x004db74c) */
/* WARNING: Removing unreachable block (ram,0x004db6fc) */
/* WARNING: Removing unreachable block (ram,0x004db720) */

int FUN_004db4a0(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  uint uVar8;
  uint uVar9;
  undefined8 local_e0;
  undefined2 local_d8;
  undefined1 local_d6;
  long *local_d0;
  long *local_c8 [2];
  undefined8 local_b8;
  undefined4 local_b0 [2];
  long local_a8;
  long *local_a0;
  long *local_98;
  long *plStack_90;
  
  local_a8 = param_1[0xe];
  lVar4 = *(long *)(local_a8 + 0x18);
  local_b0[0] = *(undefined4 *)(lVar4 + 0x210);
  local_b8 = *(undefined8 *)(lVar4 + 0x208);
  iVar2 = FUN_004d6d30(param_1 + 0x14,&local_b8,lVar4,(int)param_1[0x12]);
  puVar1 = PTR_PTR_02713088;
  if (iVar2 == 1) {
    local_b8 = CONCAT44(local_b8._4_4_,(int)param_1[0x12]);
    uVar6 = 0;
    local_a0 = param_1 + 0x14;
    do {
      local_c8[0] = (long *)0x0;
      FUN_0048d600(lVar4,uVar6 & 0xffffffff,local_c8);
      if (local_c8[0] != (long *)0x0) {
        local_d0 = (long *)0x0;
        local_e0 = 0;
        local_d8 = 1;
        local_d6 = 0;
        iVar2 = FUN_0045f0b0((int)local_c8[0][6],&local_d0,&local_e0);
        if (iVar2 == 1) {
          iVar2 = FUN_0045f330((int)local_c8[0][6],3,&local_e0);
          if (iVar2 != 0) {
LAB_004db5ac:
            (**(code **)(*local_d0 + 0x10))(local_d0,puVar1);
            iVar2 = 1;
            goto joined_r0x004db78c;
          }
          if ((char)local_d8 == '\0') {
            lVar3 = FUN_00404690(*(undefined4 *)PTR_DAT_02712e28,0x138);
            if (lVar3 != 0) {
                    /* WARNING: Subroutine does not return */
              memset((void *)(lVar3 + 8),0,0x130);
            }
          }
          else {
            if (local_d8._1_1_ != '\0') goto LAB_004db5ac;
            lVar3 = FUN_00404690(*(undefined4 *)PTR_DAT_02712e28,0xb0);
            if (lVar3 != 0) {
                    /* WARNING: Subroutine does not return */
              memset((void *)(lVar3 + 8),0,0xa8);
            }
          }
          (**(code **)(*local_d0 + 0x10))(local_d0,puVar1);
          iVar2 = 2;
          uVar9 = 5;
          uVar8 = 5;
        }
        else {
joined_r0x004db78c:
          uVar9 = 4;
          uVar8 = 4;
        }
        if (local_c8[0] != (long *)0x0) {
          (**(code **)(*local_c8[0] + 0x18))();
          local_c8[0] = (long *)0x0;
          uVar8 = uVar9;
        }
        if ((uVar8 | 4) != 4) {
          return iVar2;
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 4);
    *(undefined4 *)((long)param_1 + 0x94) = local_b8._4_4_;
    iVar2 = FUN_004cd3e0(param_1 + 0x36);
    if (iVar2 == 1) {
      plVar7 = param_1 + 0x6e;
      local_98 = param_1 + 0x34;
      iVar2 = FUN_004e0b80(plVar7,lVar4);
      if (iVar2 == 1) {
        plStack_90 = plVar7;
        lVar4 = 3;
        do {
          plVar5 = *(long **)(local_b0 + lVar4 * 2);
          (**(code **)(*plVar7 + 0x48))(plVar7,plVar5);
          uVar8 = (uint)lVar4;
          plVar7 = plVar5;
          lVar4 = lVar4 + -1;
        } while ((uVar8 & 0xff) != 1);
        (**(code **)(*param_1 + 0xe8))(param_1);
        iVar2 = 1;
      }
    }
  }
  else {
    iVar2 = 2;
  }
  return iVar2;
}


