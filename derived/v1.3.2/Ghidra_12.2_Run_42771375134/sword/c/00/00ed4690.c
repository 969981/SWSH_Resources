/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ed4690; name: FUN_00ed4690
 */


int FUN_00ed4690(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar1 = PTR_DAT_0271f740;
  lVar5 = 0;
  iVar2 = 0;
  do {
    uVar6 = (ulong)*(byte *)(param_2 + lVar5);
    if (uVar6 != 7) {
      if (*(long *)(param_1 + uVar6 * 0x38 + 0x140) == 0) {
        if (*(long *)(param_2 + lVar5 + 8) != 0) {
          iVar2 = 1;
        }
      }
      else {
        lVar4 = param_3;
        if (*(char *)(param_2 + lVar5 + 0x30) == '\0') {
          lVar4 = *(long *)(param_1 + 0x130);
        }
        if ((*(long *)(param_2 + lVar5 + 8) != *(long *)(param_1 + uVar6 * 0x38 + 0x150)) ||
           (lVar4 != *(long *)(param_1 + uVar6 * 0x38 + 0x148))) {
          uVar3 = FUN_008d42a0(param_1 + uVar6 * 0x38 + 0x160,0);
          if ((uVar3 & 1) == 0) {
            return 2;
          }
          if (6 < (ulong)*(byte *)(param_2 + lVar5)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          lVar4 = *(long *)puVar1 + (ulong)*(byte *)(param_2 + lVar5) * 0x20;
          (**(code **)**(undefined8 **)(lVar4 + 8))();
          *(undefined8 *)(lVar4 + 8) = 0;
          (**(code **)(**(long **)(lVar4 + 0x10) + 0x18))
                    (*(long **)(lVar4 + 0x10),*(undefined8 *)(lVar4 + 0x18),
                     *(undefined8 *)(lVar4 + 0x20),8);
          *(undefined8 *)(lVar4 + 0x18) = 0;
          *(undefined8 *)(lVar4 + 0x20) = 0;
          *(undefined8 *)(lVar4 + 0x10) = 0;
          local_70 = 0;
          uStack_68 = 0;
          FUN_008d4290(&local_70);
          lVar4 = param_1 + uVar6 * 0x38;
          *(undefined8 *)(lVar4 + 0x140) = 0;
          *(undefined8 *)(lVar4 + 0x148) = 0;
          *(undefined8 *)(lVar4 + 0x138) = 0;
          iVar2 = 1;
          *(undefined8 *)(lVar4 + 0x160) = local_70;
          *(undefined8 *)(lVar4 + 0x168) = uStack_68;
          *(undefined8 *)(lVar4 + 0x150) = 0;
          *(undefined8 *)(lVar4 + 0x158) = 0;
        }
      }
    }
    lVar5 = lVar5 + 0x38;
    if (lVar5 == 0x188) {
      if (iVar2 == 1) {
        FUN_00ebb980(param_1,param_2,*(undefined8 *)(param_1 + 0x130),param_3);
        iVar2 = 1;
      }
      return iVar2;
    }
  } while( true );
}


