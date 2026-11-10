/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008619c0; name: FUN_008619c0
 */


undefined8 FUN_008619c0(long param_1,string *param_2,undefined8 param_3,undefined8 param_4)

{
  size_t __n;
  byte bVar1;
  string sVar2;
  string sVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  __tree_node_base *p_Var8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  string *psVar12;
  void *__s2;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  string local_a0 [16];
  void *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  
  sVar2 = *param_2;
  uVar6 = (ulong)((byte)sVar2 >> 1);
  if (((byte)sVar2 & 1) != 0) {
    uVar6 = *(ulong *)(param_2 + 8);
  }
  if (uVar6 != 0) {
    psVar12 = *(string **)(param_2 + 0x10);
    uVar11 = 0;
    if (((byte)sVar2 & 1) == 0) {
      psVar12 = param_2 + 1;
    }
    do {
      sVar3 = psVar12[uVar11];
      if (((sVar3 != (string)0x2e) && (sVar3 != (string)0x5f)) &&
         (((byte)sVar3 < 0x30 ||
          ((0x39 < (byte)sVar3 &&
           (((byte)sVar3 < 0x41 || ((0x5a < (byte)sVar3 && (0x19 < (byte)((char)sVar3 + 0x9fU)))))))
          )))) {
        FUN_00801270(local_a0,2,
                     "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor_database.cc"
                     ,0x5e);
        uVar7 = FUN_00800f30(local_a0,"Invalid symbol name: ");
        uVar7 = FUN_00800f60(uVar7,param_2);
        goto LAB_00861ccc;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar6);
  }
  plVar14 = (long *)(param_1 + 0x20);
  plVar16 = (long *)*plVar14;
  if (plVar16 == (long *)0x0) {
    plVar15 = plVar14;
    if (plVar14 != *(long **)(param_1 + 0x18)) goto LAB_00861af4;
  }
  else {
    psVar12 = *(string **)(param_2 + 0x10);
    if (((byte)sVar2 & 1) == 0) {
      psVar12 = param_2 + 1;
    }
    plVar9 = plVar14;
    do {
      bVar1 = *(byte *)(plVar16 + 4);
      uVar11 = (ulong)(bVar1 >> 1);
      if ((bVar1 & 1) != 0) {
        uVar11 = plVar16[5];
      }
      __n = uVar11;
      if (uVar6 <= uVar11) {
        __n = uVar6;
      }
      if (__n == 0) {
LAB_00861ac4:
        uVar5 = (uint)(uVar11 < uVar6);
        if (uVar6 < uVar11) {
          uVar5 = 0xffffffff;
        }
      }
      else {
        __s2 = (void *)plVar16[6];
        if ((bVar1 & 1) == 0) {
          __s2 = (void *)((long)plVar16 + 0x21);
        }
        uVar5 = memcmp(psVar12,__s2,__n);
        if (uVar5 == 0) goto LAB_00861ac4;
      }
      lVar10 = 0;
      plVar15 = plVar16;
      if (-1 < (int)uVar5) {
        lVar10 = 8;
        plVar15 = plVar9;
      }
      plVar16 = *(long **)((long)plVar16 + lVar10);
      plVar9 = plVar15;
    } while (plVar16 != (long *)0x0);
    if (plVar15 != *(long **)(param_1 + 0x18)) {
LAB_00861af4:
      plVar16 = (long *)*plVar15;
      plVar9 = plVar15;
      if ((long *)*plVar15 == (long *)0x0) {
        do {
          plVar15 = (long *)plVar9[2];
          bVar4 = (long *)*plVar15 == plVar9;
          plVar9 = plVar15;
        } while (bVar4);
      }
      else {
        do {
          plVar15 = plVar16;
          plVar16 = (long *)plVar15[1];
        } while ((long *)plVar15[1] != (long *)0x0);
      }
    }
  }
  plVar16 = (long *)(param_1 + 0x18);
  local_88 = param_3;
  uStack_80 = param_4;
  if (plVar15 == plVar14) {
    std::string::string(local_a0,param_2);
    plVar14 = (long *)FUN_00862020(plVar16,&local_68,local_a0);
    lVar10 = *plVar14;
  }
  else {
    plVar9 = plVar15 + 4;
    uVar6 = FUN_00862150(param_1,plVar9,param_2);
    if ((uVar6 & 1) != 0) {
      FUN_00801270(local_a0,2,
                   "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor_database.cc"
                   ,0x6d);
      uVar7 = FUN_00800f30(local_a0,"Symbol name \"");
      uVar7 = FUN_00800f60(uVar7,param_2);
      uVar7 = FUN_00800f30(uVar7,"\" conflicts with the existing symbol \"");
LAB_00861cbc:
      uVar7 = FUN_00800f60(uVar7,plVar9);
      uVar7 = FUN_00800f30(uVar7,&DAT_01cebaa1);
LAB_00861ccc:
      FUN_00800fa0(&local_68,uVar7);
      FUN_00801290(local_a0);
      return 0;
    }
    plVar9 = (long *)plVar15[1];
    if ((long *)plVar15[1] == (long *)0x0) {
      plVar9 = plVar15 + 2;
      plVar13 = (long *)*plVar9;
      if ((long *)*plVar13 != plVar15) {
        do {
          lVar10 = *plVar9;
          plVar9 = (long *)(lVar10 + 0x10);
          plVar13 = (long *)*plVar9;
        } while (*plVar13 != lVar10);
      }
    }
    else {
      do {
        plVar13 = plVar9;
        plVar9 = (long *)*plVar13;
      } while ((long *)*plVar13 != (long *)0x0);
    }
    if (plVar13 != plVar14) {
      plVar9 = plVar13 + 4;
      uVar6 = FUN_00862150(param_1,param_2,plVar9);
      if ((uVar6 & 1) != 0) {
        FUN_00801270(local_a0,2,
                     "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor_database.cc"
                     ,0x7a);
        uVar7 = FUN_00800f30(local_a0,"Symbol name \"");
        uVar7 = FUN_00800f60(uVar7,param_2);
        uVar7 = FUN_00800f30(uVar7,"\" conflicts with the existing symbol \"");
        goto LAB_00861cbc;
      }
    }
    std::string::string(local_a0,param_2);
    plVar14 = (long *)FUN_00862280(plVar16,plVar13,&local_68,auStack_70,local_a0);
    lVar10 = *plVar14;
  }
  if (lVar10 == 0) {
    p_Var8 = operator_new(0x48);
    std::string::string((string *)(p_Var8 + 0x20),local_a0);
    *(undefined8 *)p_Var8 = 0;
    *(undefined8 *)(p_Var8 + 8) = 0;
    *(undefined8 *)(p_Var8 + 0x38) = local_88;
    *(undefined8 *)(p_Var8 + 0x40) = uStack_80;
    *(undefined8 *)(p_Var8 + 0x10) = local_68;
    *plVar14 = (long)p_Var8;
    if (*(long *)*plVar16 != 0) {
      *plVar16 = *(long *)*plVar16;
      p_Var8 = (__tree_node_base *)*plVar14;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              (*(__tree_node_base **)(param_1 + 0x20),p_Var8);
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  }
  if (((byte)local_a0[0] & 1) != 0) {
    operator_delete(local_90);
  }
  return 1;
}


