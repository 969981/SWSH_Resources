/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c43460; name: FUN_00c43460
 */


undefined8 FUN_00c43460(long param_1,undefined4 param_2)

{
  bool bVar1;
  ulong uVar2;
  long *plVar3;
  void *__s;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long local_3438 [1659];
  
  lVar5 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
  if (lVar5 != 0) {
    plVar4 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    uVar2 = FUN_0150aec0(lVar5,param_2);
    if ((uVar2 & 1) == 0) {
      if ((*(long *)(param_1 + 0x68) != 0) &&
         (puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar6 != (undefined8 *)0x0))
      {
        plVar3 = (long *)(**(code **)*puVar6)(puVar6);
        lVar5 = FUN_00be66c0();
        for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
          if (plVar3 == (long *)lVar5) {
            puVar6 = puVar6 + -10;
            goto LAB_00c43504;
          }
        }
      }
      puVar6 = (undefined8 *)0x0;
LAB_00c43504:
      FUN_00c1cec0(local_3438,puVar6);
      puVar6 = *(undefined8 **)(local_3438[0] + 0x60);
      plVar3 = (long *)(**(code **)*puVar6)(puVar6);
      lVar5 = FUN_00c1bbc0();
      for (; plVar3 != (long *)lVar5; plVar3 = (long *)*plVar3) {
      }
      if (*(char *)(puVar6 + 4) == '\0') {
        bVar1 = false;
      }
      else {
        plVar3 = (long *)puVar6[6];
        if (plVar3 != (long *)0x0) {
          (**(code **)(*(long *)((long)plVar3 + 0x48) + 0x10))();
        }
        puVar6 = (undefined8 *)puVar6[8];
        if (puVar6 != (undefined8 *)0x0) {
          (**(code **)(puVar6[9] + 0x10))();
        }
        bVar1 = true;
      }
      if (local_3438[0] != 0) {
        (**(code **)(*(long *)(local_3438[0] + 0x48) + 0x18))();
        local_3438[0] = 0;
      }
      if (bVar1) {
        if (*(long *)(param_1 + 0x9d0) != 0) {
          plVar4 = *(long **)(param_1 + 8);
          __s = (void *)(**(code **)(*plVar4 + 0x10))(plVar4,0x814,4);
          lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
          if (*(ulong *)(lVar5 + 0x80) < 0x10) {
            *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar4;
            *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
                    /* WARNING: Subroutine does not return */
            memset(__s,0,0x814);
          }
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (puVar6 != (undefined8 *)0x0) {
          (**(code **)(puVar6[9] + 0x18))(puVar6 + 9);
        }
        if (plVar3 != (long *)0x0) {
          (**(code **)(*(long *)((long)plVar3 + 0x48) + 0x18))((long *)((long)plVar3 + 0x48));
        }
      }
    }
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  return 0;
}


