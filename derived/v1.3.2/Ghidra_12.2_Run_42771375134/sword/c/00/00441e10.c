/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00441e10; name: FUN_00441e10
 */


undefined8 FUN_00441e10(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  long local_50;
  undefined2 local_48 [2];
  undefined1 auStack_44 [4];
  
  plVar2 = *(long **)(param_1 + 0x60);
  if (plVar2 != (long *)0x0) {
    uVar4 = (ulong)*(uint *)(plVar2 + 1);
    if (*(uint *)(plVar2 + 1) == 0) {
      *(undefined8 *)(param_1 + 0x60) = 0;
    }
    else {
      do {
        while( true ) {
          lVar5 = *plVar2 + uVar4 * 0x28;
          if (*(long *)(lVar5 + -0x10) == 0) break;
          local_50 = 0;
          FUN_0047a310(*(long *)(lVar5 + -0x10),*(undefined8 *)(lVar5 + -8),&local_50);
          plVar2 = *(long **)(param_1 + 0x60);
          FUN_0045b3e0(*plVar2 + (ulong)*(uint *)(plVar2 + 1) * 0x28 + -0x28);
          lVar5 = local_50;
          *(int *)(plVar2 + 1) = (int)plVar2[1] + -1;
          if (local_50 == 0) {
            lVar5 = *(long *)(param_1 + 0x60);
            *(undefined8 *)(param_1 + 0x60) = 0;
            if (lVar5 != 0) {
              FUN_0045b680();
            }
            bVar1 = true;
          }
          else {
            FUN_0045b670(local_50);
            lVar3 = *(long *)(param_1 + 0x60);
            *(long *)(param_1 + 0x60) = lVar5;
            if (lVar3 == 0) {
              bVar1 = false;
            }
            else {
              FUN_0045b680();
              bVar1 = false;
            }
          }
          if (local_50 != 0) {
            FUN_0045b680();
            local_50 = 0;
          }
          if (bVar1) {
            return 1;
          }
          plVar2 = *(long **)(param_1 + 0x60);
          uVar4 = (ulong)*(uint *)(plVar2 + 1);
          if (*(uint *)(plVar2 + 1) == 0) goto LAB_00441f94;
        }
        uVar4 = FUN_00480e10(*(undefined8 *)(lVar5 + -0x28),param_2,0);
        if ((uVar4 & 1) == 0) {
          plVar2 = (long *)FUN_00492d30(*(undefined8 *)(lVar5 + -0x28),param_3,local_48,auStack_44,
                                        lVar5 + -0x20,lVar5 + -0x18);
          if (plVar2 != (long *)0x0) {
            *(undefined2 *)(param_1 + 0x68 + (ulong)(*(int *)(param_1 + 0x68) - 1) * 2 + 4) =
                 local_48[0];
            *(int *)(param_1 + 0x30) = (int)plVar2[2];
            (**(code **)(*plVar2 + 0x18))();
            return 0;
          }
          plVar2 = *(long **)(param_1 + 0x60);
          if ((int)plVar2[1] != 0) {
            return 1;
          }
          break;
        }
        iVar6 = *(int *)(param_1 + 0x68);
        *(int *)(param_1 + 0x68) = iVar6 + -1;
        if (iVar6 + -1 != 0) {
          uVar4 = (ulong)(iVar6 - 2);
          iVar6 = 1 - iVar6;
          do {
            if (((uint)uVar4 < 0x20) &&
               ((1L << (uVar4 & 0x3f) & (ulong)*(uint *)(param_1 + 0xac)) != 0)) break;
            *(uint *)(param_1 + 0x68) = (uint)uVar4;
            uVar4 = uVar4 - 1;
            iVar6 = iVar6 + 1;
          } while (iVar6 != 0);
        }
        plVar2 = *(long **)(param_1 + 0x60);
        FUN_0045b3e0(*plVar2 + (ulong)*(uint *)(plVar2 + 1) * 0x28 + -0x28);
        *(int *)(plVar2 + 1) = (int)plVar2[1] + -1;
        plVar2 = *(long **)(param_1 + 0x60);
        uVar4 = (ulong)*(uint *)(plVar2 + 1);
      } while (*(uint *)(plVar2 + 1) != 0);
LAB_00441f94:
      *(undefined8 *)(param_1 + 0x60) = 0;
      if (plVar2 == (long *)0x0) {
        return 1;
      }
    }
    FUN_0045b680();
  }
  return 1;
}


