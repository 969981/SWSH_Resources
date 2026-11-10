/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01038840; name: FUN_01038840
 */


void FUN_01038840(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 local_58;
  
  lVar6 = *(long *)(param_1 + 0x10);
  lVar4 = *(long *)(lVar6 + 0x3c0);
  if ((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x58), lVar4 == 0)) {
    uVar7 = 0;
  }
  else {
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    (**(code **)(*plVar5 + 0x18))(plVar5);
    lVar4 = *(long *)(*(long *)(lVar6 + 0x3c0) + 0x58);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    local_70 = &local_58;
    local_58 = 0;
    local_68 = 0x18cd1891cbc1757a;
    FUN_008a0cd0(lVar4,&local_70,0);
    uVar7 = local_58;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
    }
  }
  *(undefined8 *)(param_1 + 0x18) = uVar7;
  puVar1 = PTR_DAT_02710860;
  lVar6 = 0;
  lVar4 = param_1 + 0x20;
  do {
    plVar5 = (long *)FUN_00ff93d0(param_1);
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar5;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
    lVar3 = (**(code **)(*plVar5 + 0x10))(plVar5,0x80,8);
    if (lVar3 == 0) {
      (**(code **)(*plVar5 + 0xb8))(plVar5);
    }
    FUN_0077d050(lVar3,0x100);
    *(long **)(lVar3 + 8) = plVar5;
    *(long *)(lVar3 + 0x10) = lVar3;
    *(undefined8 *)(lVar3 + 0x18) = 0x80;
    *(undefined8 *)(lVar3 + 0x20) = 8;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    if (*(long *)(lVar4 + lVar6) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar4 + lVar6) + 0x48) + 0x18))();
      *(undefined8 *)(lVar4 + lVar6) = 0;
    }
    *(long *)(lVar4 + lVar6) = lVar3;
    lVar6 = lVar6 + 8;
  } while (lVar6 != 0x38);
  return;
}


