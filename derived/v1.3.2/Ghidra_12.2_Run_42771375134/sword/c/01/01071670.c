/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01071670; name: FUN_01071670
 */


void FUN_01071670(char *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  void *__src;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long local_38;
  
  (**(code **)(**(long **)(param_2 + 0x2c8) + 0x10))(&local_38);
  if (local_38 != 0) {
    puVar7 = *(undefined8 **)(local_38 + 0x60);
    if (puVar7 != (undefined8 *)0x0) {
      plVar3 = (long *)(**(code **)*puVar7)(puVar7);
      lVar4 = FUN_01072710();
      for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
        if (plVar3 == (long *)lVar4) {
          puVar7 = puVar7 + -10;
          goto LAB_010716e4;
        }
      }
      puVar7 = (undefined8 *)0x0;
    }
LAB_010716e4:
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))((long *)(local_38 + 0x48));
    if (puVar7 != (undefined8 *)0x0) {
      lVar4 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1e8);
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      __src = (void *)FUN_01524df0(lVar4);
      memcpy(param_1,__src,0x90);
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
      }
      puVar5 = (undefined8 *)FUN_00cbd3c0();
      uVar6 = *puVar5;
      if (*(int *)puVar7[0xc] == 1) {
        *(undefined8 *)(param_1 + 0x70) = uVar6;
        *(undefined8 *)(param_1 + 0x78) = uVar6;
      }
      else if (*(int *)puVar7[0xc] == 0) {
        *(undefined8 *)(param_1 + 0x18) = uVar6;
        *(undefined8 *)(param_1 + 0x20) = uVar6;
        uVar1 = 0xae3f3383947b189a;
        if (*param_1 != '\x01') {
          uVar1 = 0;
        }
        *(undefined8 *)(param_1 + 0x28) = uVar6;
        *(undefined8 *)(param_1 + 0x30) = uVar6;
        uVar2 = 0xa182cf93559d772d;
        if (*param_1 != '\0') {
          uVar2 = uVar1;
        }
        *(undefined8 *)(param_1 + 0x60) = uVar6;
        *(undefined8 *)(param_1 + 0x68) = uVar6;
        *(undefined8 *)(param_1 + 0x70) = uVar6;
        *(undefined8 *)(param_1 + 0x78) = uVar6;
        *(undefined8 *)(param_1 + 0x48) = uVar6;
        *(undefined8 *)(param_1 + 0x50) = uVar2;
      }
      *(undefined8 *)(param_1 + 0x38) = uVar6;
      *(undefined8 *)(param_1 + 0x40) = uVar6;
      *(undefined8 *)(param_1 + 0x58) = uVar6;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


