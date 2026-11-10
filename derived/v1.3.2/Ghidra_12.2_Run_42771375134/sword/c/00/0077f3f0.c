/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0077f3f0; name: FUN_0077f3f0
 */


undefined4 FUN_0077f3f0(long *param_1,undefined4 *param_2)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  undefined4 uVar7;
  undefined4 local_34;
  
  *param_2 = 0;
  uVar7 = 4;
  switch((int)param_1[0x15]) {
  case 0:
    if (*(int *)((long)param_1 + 0xbc) != 0) {
      return 0;
    }
    uVar7 = (undefined4)param_1[0x12];
    switch(uVar7) {
    case 0:
      goto switchD_0077f428_caseD_1;
    case 1:
      if (*(int *)((long)param_1 + 0x114) != 2) {
        return 0;
      }
      uVar6 = (**(code **)(*param_1 + 0x70))(param_1);
      if ((uVar6 & 1) == 0) {
        return 0;
      }
      break;
    case 2:
      if ((*(byte *)((long)param_1 + 0xa3) <= *(byte *)((long)param_1 + 0xa2)) &&
         (bVar1 = *(byte *)((long)param_1 + 0xa3) + 1, *(byte *)((long)param_1 + 0xa3) = bVar1,
         bVar1 <= *(byte *)((long)param_1 + 0xa2))) {
        return 0;
      }
      break;
    case 3:
      if ((*(int *)((long)param_1 + 0x114) != 2) ||
         (uVar6 = (**(code **)(*param_1 + 0x70))(param_1), (uVar6 & 1) == 0)) {
        if ((*(byte *)((long)param_1 + 0xa3) <= *(byte *)((long)param_1 + 0xa2)) &&
           (bVar1 = *(byte *)((long)param_1 + 0xa3) + 1, *(byte *)((long)param_1 + 0xa3) = bVar1,
           bVar1 <= *(byte *)((long)param_1 + 0xa2))) {
          return 0;
        }
      }
    }
    *(undefined4 *)(param_1 + 0x15) = 1;
    *(undefined4 *)((long)param_1 + 0x114) = 1;
    return 4;
  case 1:
    goto switchD_0077f428_caseD_1;
  case 2:
    if (*(int *)((long)param_1 + 0xbc) != 1) {
      if (*(int *)((long)param_1 + 0xbc) == 2) {
        return 2;
      }
      if (*(int *)((long)param_1 + 0x114) != 2) {
        return 2;
      }
      uVar6 = (**(code **)(*param_1 + 0x68))(param_1);
      if ((uVar6 & 1) == 0) {
        return 2;
      }
    }
    if (*(byte *)((long)param_1 + 0x9b) < *(byte *)((long)param_1 + 0x99)) {
      FUN_0077ff40(param_1,0);
      return 2;
    }
    *(undefined1 *)((long)param_1 + 0x9c) = 0;
    *(undefined1 *)((long)param_1 + 0x9f) = 0;
    FUN_0077f910(param_1);
    (**(code **)(*param_1 + 0x80))(param_1);
    break;
  case 3:
    uVar6 = FUN_0077fa30(param_1);
    if ((uVar6 & 1) == 0) {
      *param_2 = 1;
      return 1;
    }
    uVar4 = FUN_0077d470(param_1[0xf]);
    FUN_0077dad0(uVar4,*(undefined1 *)((long)param_1 + 0x9b));
LAB_0077f4f0:
    *param_2 = 2;
    *(undefined4 *)(param_1 + 0x15) = 4;
    *(undefined4 *)((long)param_1 + 0x114) = 0;
    return 1;
  case 4:
    if (*(int *)((long)param_1 + 0x114) == 0) {
      *(undefined4 *)((long)param_1 + 0x114) = 1;
      cVar3 = *(char *)((long)param_1 + 0xba);
    }
    else {
      cVar3 = *(char *)((long)param_1 + 0xba);
    }
    if (cVar3 != '\0') {
      *(undefined4 *)(param_1 + 0x15) = 1;
      *(undefined4 *)((long)param_1 + 0x114) = 1;
      return 4;
    }
    bVar1 = *(char *)((long)param_1 + 0x9e) + 1;
    *(byte *)((long)param_1 + 0x9e) = bVar1;
    if (bVar1 <= *(byte *)((long)param_1 + 0x9d)) {
      return 1;
    }
    *(undefined1 *)((long)param_1 + 0x9e) = 0;
    uVar4 = FUN_0077fde0(param_1,&local_34);
    if (*(char *)((long)param_1 + 0xb9) == '\0') {
      (**(code **)(*param_1 + 0x58))
                (param_1,uVar4,
                 *(undefined8 *)(param_1[0xb] + (ulong)*(byte *)((long)param_1 + 0x9f) * 0xa0));
      (**(code **)(*param_1 + 0x60))
                (param_1,uVar4,
                 *(undefined8 *)(param_1[0xb] + (ulong)*(byte *)((long)param_1 + 0x9f) * 0xa0),
                 local_34);
      if ((char)param_1[0x17] == '\0') {
        return 1;
      }
    }
    else {
      param_1[0x1d] = param_1[0x18];
      param_1[0x20] = param_1[0x1b];
      param_1[0x21] = param_1[0x1c];
      param_1[0x1e] = param_1[0x19];
      param_1[0x1f] = param_1[0x1a];
      if (*(ushort *)(param_1 + 0x1d) >> 1 == 0x5f00) {
        *(char *)((long)param_1 + 0x9b) = *(char *)((long)param_1 + 0x9b) + '\x01';
        *(char *)((long)param_1 + 0x9c) = *(char *)((long)param_1 + 0x9c) + '\x01';
        *param_2 = 1;
        uVar7 = 2;
        goto LAB_0077f8bc;
      }
      plVar5 = *(long **)(param_1[0xb] + (ulong)*(byte *)((long)param_1 + 0x9f) * 0xa0);
      (**(code **)(*plVar5 + 0x110))(plVar5,uVar4,0,local_34);
      if ((char)param_1[0x17] == '\0') {
        uVar6 = (**(code **)(*param_1 + 0x88))(param_1,param_1 + 0x1d);
        if ((uVar6 & 1) == 0) {
          uVar7 = 2;
        }
        else {
          uVar7 = 1;
        }
        *param_2 = uVar7;
        return 1;
      }
    }
    uVar7 = 6;
    *param_2 = 1;
LAB_0077f8bc:
    *(undefined4 *)(param_1 + 0x15) = uVar7;
    *(undefined4 *)((long)param_1 + 0x114) = 1;
    return 1;
  case 5:
    if ((*(byte *)((long)param_1 + 0x9b) < *(byte *)((long)param_1 + 0x99)) ||
       ((char)param_1[0x17] == '\0')) goto LAB_0077f4f0;
    break;
  case 6:
    bVar1 = *(char *)((long)param_1 + 0x9b) + 1;
    *(byte *)((long)param_1 + 0x9b) = bVar1;
    bVar2 = *(char *)((long)param_1 + 0x9c) + 1;
    *(byte *)((long)param_1 + 0x9c) = bVar2;
    if (*(byte *)((long)param_1 + 0x99) <= bVar1) break;
    if (bVar2 < *(byte *)(param_1 + 0x13)) {
      uVar4 = FUN_0077d470(param_1[0xf]);
      FUN_0077dad0(uVar4,*(undefined1 *)((long)param_1 + 0x9b));
      *(char *)((long)param_1 + 0x9f) = *(char *)((long)param_1 + 0x9f) + '\x01';
      FUN_0077f910(param_1);
      (**(code **)(*param_1 + 0x80))(param_1);
      *(undefined4 *)(param_1 + 0x15) = 4;
      *(undefined4 *)((long)param_1 + 0x114) = 0;
      return 1;
    }
    *(undefined2 *)(param_1 + 0x1d) = 0xbe00;
    uVar7 = 2;
    *(undefined4 *)((long)param_1 + 0x10c) = 0;
    *(undefined8 *)((long)param_1 + 0xfc) = 0;
    *(undefined8 *)((long)param_1 + 0xf4) = 0;
    *(undefined8 *)((long)param_1 + 0xec) = 0;
    *(undefined8 *)((long)param_1 + 0x104) = 0;
    *(undefined4 *)(param_1 + 0x15) = 2;
    goto LAB_0077f654;
  default:
    return 1;
  }
  uVar7 = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
LAB_0077f654:
  *(undefined4 *)((long)param_1 + 0x114) = 1;
switchD_0077f428_caseD_1:
  return uVar7;
}


