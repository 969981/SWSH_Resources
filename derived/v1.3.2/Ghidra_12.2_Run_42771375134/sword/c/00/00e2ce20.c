/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e2ce20; name: FUN_00e2ce20
 */


long * FUN_00e2ce20(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long *local_48;
  
  puVar2 = PTR_DAT_02710860;
  if (param_2 == 0) {
    plVar5 = (long *)0x0;
  }
  else {
    plVar6 = *(long **)(param_1 + 0x48);
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
LAB_00e2cfc0:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar6;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    plVar5 = (long *)(**(code **)(*plVar6 + 0x10))(plVar6,0x560,0x10);
    if (plVar5 == (long *)0x0) {
      (**(code **)(*plVar6 + 0xb8))(plVar6);
    }
    FUN_00e36b10(plVar5,*(undefined8 *)(param_1 + 0x48),param_1 + 0x78,param_2);
    puVar3 = PTR_DAT_0271f668;
    *plVar5 = (long)(PTR_DAT_0271f668 + 0x10);
    plVar5[1] = (long)plVar6;
    plVar5[9] = (long)(puVar3 + 0x250);
    plVar5[10] = (long)(puVar3 + 0x290);
    plVar5[2] = (long)plVar5;
    plVar5[3] = 0x560;
    plVar5[4] = 0x10;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    if (plVar5 != (long *)0x0) {
      (**(code **)(plVar5[9] + 0x10))();
      puVar1 = *(undefined8 **)(param_1 + 0xb8);
      local_48 = plVar5;
      if (puVar1 < *(undefined8 **)(param_1 + 0xc0)) {
        uVar7 = *(undefined8 *)(param_1 + 200);
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
        if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_00e2cfc0;
        *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar7;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
        *puVar1 = local_48;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
        *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb8) + 8;
      }
      else {
        FUN_00e1d2d0(param_1 + 0xb0,&local_48);
        if (local_48 != (long *)0x0) {
          (**(code **)(local_48[9] + 0x18))();
        }
      }
    }
  }
  return plVar5;
}


