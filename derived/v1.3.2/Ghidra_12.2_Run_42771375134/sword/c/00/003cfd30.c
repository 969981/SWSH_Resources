/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003cfd30; name: FUN_003cfd30
 */


void FUN_003cfd30(long *param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  undefined8 local_88;
  long lStack_80;
  long local_78;
  undefined8 local_70;
  undefined2 local_68 [4];
  ushort local_58 [2];
  uint local_54;
  
  plVar8 = *(long **)(*param_1 + 0x1068);
  if (plVar8 != (long *)0x0) {
    local_58[0] = 0;
    local_68[0] = 0;
    uVar3 = (**(code **)(*plVar8 + 0x10))(plVar8,&local_54,local_68,local_58);
    while ((uVar3 & 1) != 0) {
      plVar6 = (long *)param_1[0x13];
      uVar5 = local_58[0] & 0xfffffffe;
      uVar3 = (ulong)local_54;
      if (((local_58[0] ^ 0xffffffff) & 3) != 0) {
        uVar5 = (uint)local_58[0];
      }
      local_58[0] = (ushort)uVar5;
      uVar7 = *(ulong *)(*plVar6 + uVar3 * 8);
      plVar9 = (long *)(uVar7 & 0xfffffffffffffffc);
      if ((uVar7 & 3) == 0) {
        local_88 = CONCAT44(local_54,CONCAT22(local_68[0],local_58[0]));
        plVar6 = (long *)FUN_003ced30(param_1,plVar9,&local_88,1,param_2,param_3 & 1);
        if ((plVar6 == plVar9) && (*(char *)((long)plVar9 + 0x24) == '\0')) {
          FUN_003fb400(plVar9,1);
        }
      }
      else {
        local_70._4_4_ = 0xffffffff;
        if ((~uVar5 & 0xc) == 0) {
          local_70._4_4_ = local_54;
        }
        else {
          *(long *)(*plVar6 + uVar3 * 8) = plVar6[2];
          plVar6[2] = uVar3;
          *(undefined1 *)((long)plVar9 + 0x1a) = 0;
        }
        local_70._0_4_ = CONCAT22(local_68[0],local_58[0]);
        *(undefined2 *)(plVar9 + 2) = local_68[0];
        if ((uVar5 & 1) == 0) {
          if ((uVar5 >> 1 & 1) != 0) {
            *(undefined1 *)((long)plVar9 + 0x1b) = 1;
          }
        }
        else {
          *(undefined1 *)((long)plVar9 + 0x1c) = 1;
        }
        lVar1 = *plVar9;
        lVar2 = plVar9[1];
        local_88 = *(long *)(*(long *)(lVar2 + 0x10) + 0x28);
        lStack_80 = local_88 + (ulong)*(uint *)(*(long *)(lVar2 + 0x10) + 0x34) * 8;
        local_78 = lVar2;
        while (lVar4 = FUN_003c67f0(&local_88), lVar4 != 0) {
          if (((*(char *)(lVar4 + 0x24) == '\x05') && (*(long *)(lVar4 + 0x30) == lVar2)) &&
             (*(long *)(lVar4 + 8) == lVar1)) {
            FUN_003ced30(param_1,lVar4,&local_70,1,param_2,param_3 & 1);
          }
        }
      }
      uVar3 = (**(code **)(*plVar8 + 0x10))(plVar8,&local_54,local_68,local_58);
    }
  }
  return;
}


