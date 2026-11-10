/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f33e40; name: FUN_00f33e40
 */


undefined8 * FUN_00f33e40(undefined8 *param_1,ulong *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined1 auStack_40 [8];
  ulong *local_38;
  
  plVar4 = (long *)param_1[0xe];
  if (plVar4 != (long *)0x0) {
    do {
      if ((ulong)plVar4[4] <= *param_2) {
        if (*param_2 <= (ulong)plVar4[4]) {
          return (undefined8 *)0x0;
        }
        plVar4 = plVar4 + 1;
      }
      plVar4 = (long *)*plVar4;
    } while (plVar4 != (long *)0x0);
  }
  plVar4 = (long *)*param_1;
  puVar1 = (undefined8 *)(**(code **)(*plVar4 + 0x10))(plVar4,0x20,0x10);
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar4;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  *puVar1 = *param_1;
  *(undefined4 *)(puVar1 + 1) = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  local_38 = param_2;
  lVar2 = FUN_00f34400(param_1 + 0xd,param_2,&DAT_02161c1c,&local_38,auStack_40);
  lVar3 = *(long *)(lVar2 + 0x28);
  *(undefined8 **)(lVar2 + 0x28) = puVar1;
  if (lVar3 != 0) {
    (**(code **)(**(long **)(lVar2 + 0x30) + 0x18))
              (*(long **)(lVar2 + 0x30),lVar3,*(undefined8 *)(lVar2 + 0x38),
               *(undefined8 *)(lVar2 + 0x40));
  }
  *(long **)(lVar2 + 0x30) = plVar4;
  *(undefined8 *)(lVar2 + 0x38) = 0x20;
  *(undefined8 *)(lVar2 + 0x40) = 0x10;
  return puVar1;
}


