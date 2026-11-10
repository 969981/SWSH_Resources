/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01140d10; name: FUN_01140d10
 */


void FUN_01140d10(long param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined4 local_54;
  
  if (*(long *)(param_1 + 0x5d0) != 0) {
    local_54 = 0;
    uVar3 = FUN_01141350(*(long *)(param_1 + 0x5d0),param_1 + 0x5d8,&local_54);
    bVar2 = *(int *)(param_1 + 0x6ac) != *(int *)(param_1 + 0x6b0);
    FUN_011414b0(param_1,0,param_2);
    FUN_011414b0(param_1,1,param_2);
    FUN_011414b0(param_1,2,param_2);
    FUN_011414b0(param_1,3,param_2);
    FUN_011419f0(param_1,param_2);
    bVar1 = param_2 == 1 || bVar2;
    if ((bVar1) || (local_54._3_1_ != '\0')) {
      FUN_01141c40(param_1);
    }
    if ((uVar3 & 1) != 0 || (param_2 == 1 || bVar2)) {
      lVar4 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&DAT_02165828);
      if (lVar4 == 0) {
LAB_01141284:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) | 1;
      lVar4 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&DAT_02165848);
      if (lVar4 == 0) goto LAB_01141284;
      *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) | 1;
      lVar4 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&DAT_02165830);
      if (lVar4 == 0) goto LAB_01141284;
      *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) | 1;
      lVar4 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&DAT_02165850);
      if (lVar4 == 0) goto LAB_01141284;
      *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) | 1;
      lVar4 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&DAT_02165870);
      if (lVar4 == 0) goto LAB_01141284;
      *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) & 0xfe;
      lVar4 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&DAT_02165838);
      if (lVar4 == 0) goto LAB_01141284;
      *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) | 1;
      lVar4 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&DAT_02165858);
      if (lVar4 == 0) goto LAB_01141284;
      *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) | 1;
      lVar4 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&DAT_02165878);
      if (lVar4 == 0) goto LAB_01141284;
      *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) & 0xfe;
      lVar4 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&DAT_02165840);
      if (lVar4 == 0) goto LAB_01141284;
      *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) | 1;
      lVar4 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&DAT_02165860);
      if (lVar4 == 0) goto LAB_01141284;
      *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) | 1;
      lVar4 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&DAT_02165880);
      if (lVar4 == 0) goto LAB_01141284;
      *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) & 0xfe;
    }
    if ((bVar1) || (local_54._2_1_ != '\0')) {
      uVar3 = *(uint *)(*(long *)(param_1 + 0x5d0) + 0xc4);
      if (*(char *)(param_1 + 0x6b4) == '\0') {
        *(byte *)(*(long *)(param_1 + 0x6d0) + 0x58) =
             *(byte *)(*(long *)(param_1 + 0x6d0) + 0x58) & 0xfe |
             (uVar3 != 0xffffffff && *(int *)(param_1 + 0x6ac) == 1);
        *(byte *)(*(long *)(param_1 + 0x6c8) + 0x58) =
             *(byte *)(*(long *)(param_1 + 0x6c8) + 0x58) & 0xfe;
      }
      else {
        lVar4 = *(long *)(param_1 + 0x2b0);
        if (lVar4 != 0) {
          (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
        }
        lVar5 = *(long *)(lVar4 + 0x2e0);
        if (lVar5 != 0) {
          (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
        }
        if (uVar3 != 0xffffffff) {
          if (lVar5 != 0) {
            (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
          }
          FUN_014ca220(lVar5,0,uVar3 / 10000000 + (uVar3 / 100000000) * -10,1,2,1);
          FUN_014ca220(lVar5,1,uVar3 / 1000000 + (uVar3 / 10000000) * -10,1,2,1);
          FUN_014ca220(lVar5,2,(uVar3 >> 5) / 0xc35 + ((uVar3 >> 5) / 0x7a12) * -10,1,2,1);
          FUN_014ca220(lVar5,3,uVar3 / 10000 + (uVar3 / 100000) * -10,1,2,1);
          FUN_014ca220(lVar5,4,uVar3 / 1000 + (uVar3 / 10000) * -10,1,2,1);
          FUN_014ca220(lVar5,5,uVar3 / 100 + (uVar3 / 1000) * -10,1,2,1);
          FUN_014ca220(lVar5,6,uVar3 / 10 + (uVar3 / 100) * -10,1,2,1);
          FUN_014ca220(lVar5,7,uVar3 % 10,1,2,1);
          uVar6 = *(undefined8 *)(param_1 + 0x6c0);
          lVar7 = *(long *)(lVar4 + 0x2e8);
          if (lVar7 == 0) {
            FUN_0077eb10(uVar6,&DAT_02165888,0);
          }
          else {
            plVar8 = (long *)(lVar7 + 0x48);
            (**(code **)(*plVar8 + 0x10))(plVar8);
            FUN_0077eb10(uVar6,&DAT_02165888,lVar7);
            (**(code **)(*plVar8 + 0x18))(plVar8);
          }
          FUN_0167cce0(lVar4,&DAT_02165890,10);
          FUN_00ffd840(param_1 + 0x100,*(undefined8 *)(param_1 + 0x6c8));
          if (lVar5 != 0) {
            (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
          }
        }
        *(byte *)(*(long *)(param_1 + 0x6c8) + 0x58) =
             *(byte *)(*(long *)(param_1 + 0x6c8) + 0x58) & 0xfe | uVar3 != 0xffffffff;
        *(byte *)(*(long *)(param_1 + 0x6d0) + 0x58) =
             *(byte *)(*(long *)(param_1 + 0x6d0) + 0x58) & 0xfe;
        if (lVar5 != 0) {
          (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
        }
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
      }
    }
    FUN_011421e0(param_1 + 0x5d8,*(undefined8 *)(param_1 + 0x5d0));
    *(undefined4 *)(param_1 + 0x6b0) = *(undefined4 *)(param_1 + 0x6ac);
  }
  return;
}


