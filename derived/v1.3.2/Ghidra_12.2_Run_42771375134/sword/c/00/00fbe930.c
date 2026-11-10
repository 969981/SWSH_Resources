/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fbe930; name: FUN_00fbe930
 */


long * FUN_00fbe930(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long local_48;
  long local_38;
  
  if ((ulong)(*(long *)(param_1 + 400) - *(long *)(param_1 + 0x188) >> 3) <
      (ulong)(long)*(int *)(param_1 + 0x4c)) {
    plVar6 = *(long **)PTR_DAT_027194d8;
    plVar3 = (long *)FUN_00fbf3b0(plVar6,*(undefined8 *)(param_1 + 0x248));
    *(uint *)((long)plVar3 + 0x37c) = *(uint *)((long)plVar3 + 0x37c) & 0xfffffffe;
    plVar4 = (long *)FUN_01225e50(param_2);
    plVar3[0xc6] = *plVar4;
    lVar5 = plVar4[2];
    lVar1 = plVar4[3];
    lVar2 = plVar4[4];
    plVar3[199] = plVar4[1];
    plVar3[0xca] = lVar2;
    plVar3[0xc9] = lVar1;
    plVar3[200] = lVar5;
    (**(code **)(*plVar3 + 0x10))(&local_48,plVar3);
    local_38 = local_48;
    local_48 = 0;
    plVar4 = *(long **)(param_1 + 400);
    if (plVar4 < *(long **)(param_1 + 0x198)) {
      uVar7 = *(undefined8 *)(param_1 + 0x1a0);
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      lVar1 = local_38;
      if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar7;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      local_38 = 0;
      *plVar4 = lVar1;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
      *(long *)(param_1 + 400) = *(long *)(param_1 + 400) + 8;
    }
    else {
      FUN_00fc3ba0(param_1 + 0x188,&local_38);
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        local_38 = 0;
      }
    }
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x38))(plVar6,1);
    }
  }
  else {
    plVar3 = (long *)0x0;
  }
  return plVar3;
}


