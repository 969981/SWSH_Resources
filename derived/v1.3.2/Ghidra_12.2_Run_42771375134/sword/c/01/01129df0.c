/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01129df0; name: FUN_01129df0
 */


void FUN_01129df0(char *param_1,long param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  long local_38;
  
  *param_1 = '\0';
  lVar2 = 0x3b6;
  if (*(char *)(param_2 + 0x3ac) == '\0') {
    lVar2 = 0x3b7;
  }
  cVar1 = *(char *)(param_2 + lVar2);
  plVar6 = *(long **)(param_2 + 8);
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar6;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  lVar3 = (**(code **)(*plVar6 + 0x10))(plVar6,0xb8,8);
  if (lVar3 == 0) {
    (**(code **)(*plVar6 + 0xb8))(plVar6);
  }
  FUN_00866110(lVar3,plVar6);
  *(long **)(lVar3 + 8) = plVar6;
  *(long *)(lVar3 + 0x10) = lVar3;
  *(undefined8 *)(lVar3 + 0x18) = 0xb8;
  *(undefined8 *)(lVar3 + 0x20) = 8;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (cVar1 == '\x06') {
    if (*param_1 != '\0') {
      param_1[8] = 'Y';
      param_1[9] = '\x16';
      param_1[10] = -0x66;
      param_1[0xb] = 'Z';
      param_1[0xc] = '^';
      param_1[0xd] = -0xc;
      param_1[0xe] = '#';
      param_1[0xf] = 'k';
      goto joined_r0x01129f48;
    }
    uVar5 = 0x6b23f45e5a9a1659;
  }
  else {
    local_38 = lVar3;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    uVar4 = FUN_014adeb0(&local_38);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    if ((uVar4 & 1) == 0) {
      lVar2 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1d8);
      if (lVar2 == 0) {
        uVar4 = FUN_01522310(0);
      }
      else {
        plVar6 = (long *)(lVar2 + 0x48);
        (**(code **)(*plVar6 + 0x10))(plVar6);
        uVar4 = FUN_01522310(lVar2);
        (**(code **)(*plVar6 + 0x18))(plVar6);
      }
      if ((uVar4 & 1) != 0) goto joined_r0x01129f48;
      if (*param_1 != '\0') {
        param_1[8] = -0x18;
        param_1[9] = -0x1d;
        param_1[10] = -0x69;
        param_1[0xb] = 'Z';
        param_1[0xc] = '^';
        param_1[0xd] = -10;
        param_1[0xe] = ' ';
        param_1[0xf] = 'k';
        goto joined_r0x01129f48;
      }
      uVar5 = 0x6b20f65e5a97e3e8;
    }
    else {
      if (*param_1 != '\0') {
        param_1[8] = 'W';
        param_1[9] = '\'';
        param_1[10] = -0x66;
        param_1[0xb] = 'Z';
        param_1[0xc] = '^';
        param_1[0xd] = -2;
        param_1[0xe] = '#';
        param_1[0xf] = 'k';
        goto joined_r0x01129f48;
      }
      uVar5 = 0x6b23fe5e5a9a2757;
    }
  }
  *(undefined8 *)(param_1 + 8) = uVar5;
  *param_1 = '\x01';
joined_r0x01129f48:
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  return;
}


