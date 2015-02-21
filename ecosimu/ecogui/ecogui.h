#pragma once

namespace ecogui {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ecogui
	/// </summary>
	public ref class ecogui : public System::Windows::Forms::Form
	{
	public:
		ecogui(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ecogui()
		{
			if (components)
			{
				delete components;
			}
		}
    private: System::Windows::Forms::GroupBox^  groupBox1;
    private: System::Windows::Forms::Label^  lblPopulation;
    private: System::Windows::Forms::Label^  lblWood;
    private: System::Windows::Forms::Label^  lblFish;
    private: System::Windows::Forms::Label^  lblCharcoal;

    private: System::Windows::Forms::Label^  lblOre;

    private: System::Windows::Forms::Label^  lblStone;
    private: System::Windows::Forms::Label^  lblIron;
    private: System::Windows::Forms::Label^  lblTools;
    private: System::Windows::Forms::GroupBox^  groupBox2;
    private: System::Windows::Forms::Button^  btnToolWorkshop;

    private: System::Windows::Forms::Button^  btnIronSmelter;

    private: System::Windows::Forms::Button^  btnStonemason;

    private: System::Windows::Forms::Button^  btnFishermen;
    private: System::Windows::Forms::Button^  btnIronMine;


    private: System::Windows::Forms::Button^  btnLumberjack;
    private: System::Windows::Forms::Button^  btnCharcoalBurner;


    private: System::Windows::Forms::Label^  label2;
    private: System::Windows::Forms::Button^  btnHouse;

    private: System::Windows::Forms::Label^  label10;
    private: System::Windows::Forms::Label^  label1;
    private: System::Windows::Forms::Label^  label4;
    private: System::Windows::Forms::Label^  label9;
    private: System::Windows::Forms::Label^  label5;
    private: System::Windows::Forms::Label^  label7;
    private: System::Windows::Forms::Label^  label8;
    private: System::Windows::Forms::GroupBox^  groupBox3;
    private: System::Windows::Forms::TextBox^  msgBox;




    protected:




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
            this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
            this->lblPopulation = (gcnew System::Windows::Forms::Label());
            this->lblWood = (gcnew System::Windows::Forms::Label());
            this->lblFish = (gcnew System::Windows::Forms::Label());
            this->lblStone = (gcnew System::Windows::Forms::Label());
            this->lblOre = (gcnew System::Windows::Forms::Label());
            this->lblCharcoal = (gcnew System::Windows::Forms::Label());
            this->lblIron = (gcnew System::Windows::Forms::Label());
            this->lblTools = (gcnew System::Windows::Forms::Label());
            this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->btnHouse = (gcnew System::Windows::Forms::Button());
            this->btnLumberjack = (gcnew System::Windows::Forms::Button());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->btnStonemason = (gcnew System::Windows::Forms::Button());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->btnCharcoalBurner = (gcnew System::Windows::Forms::Button());
            this->btnIronMine = (gcnew System::Windows::Forms::Button());
            this->btnIronSmelter = (gcnew System::Windows::Forms::Button());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->btnFishermen = (gcnew System::Windows::Forms::Button());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->btnToolWorkshop = (gcnew System::Windows::Forms::Button());
            this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
            this->msgBox = (gcnew System::Windows::Forms::TextBox());
            this->groupBox1->SuspendLayout();
            this->groupBox2->SuspendLayout();
            this->groupBox3->SuspendLayout();
            this->SuspendLayout();
            // 
            // groupBox1
            // 
            this->groupBox1->Controls->Add(this->lblTools);
            this->groupBox1->Controls->Add(this->lblIron);
            this->groupBox1->Controls->Add(this->lblCharcoal);
            this->groupBox1->Controls->Add(this->lblOre);
            this->groupBox1->Controls->Add(this->lblStone);
            this->groupBox1->Controls->Add(this->lblFish);
            this->groupBox1->Controls->Add(this->lblWood);
            this->groupBox1->Controls->Add(this->lblPopulation);
            this->groupBox1->Location = System::Drawing::Point(22, 12);
            this->groupBox1->Name = L"groupBox1";
            this->groupBox1->Size = System::Drawing::Size(554, 73);
            this->groupBox1->TabIndex = 0;
            this->groupBox1->TabStop = false;
            this->groupBox1->Text = L"Resource";
            // 
            // lblPopulation
            // 
            this->lblPopulation->AutoSize = true;
            this->lblPopulation->Location = System::Drawing::Point(6, 16);
            this->lblPopulation->Name = L"lblPopulation";
            this->lblPopulation->Size = System::Drawing::Size(69, 13);
            this->lblPopulation->TabIndex = 0;
            this->lblPopulation->Text = L"Population: 0";
            this->lblPopulation->Click += gcnew System::EventHandler(this, &ecogui::label1_Click);
            // 
            // lblWood
            // 
            this->lblWood->AutoSize = true;
            this->lblWood->Location = System::Drawing::Point(117, 16);
            this->lblWood->Name = L"lblWood";
            this->lblWood->Size = System::Drawing::Size(48, 13);
            this->lblWood->TabIndex = 0;
            this->lblWood->Text = L"Wood: 0";
            this->lblWood->Click += gcnew System::EventHandler(this, &ecogui::label1_Click);
            // 
            // lblFish
            // 
            this->lblFish->AutoSize = true;
            this->lblFish->Location = System::Drawing::Point(213, 16);
            this->lblFish->Name = L"lblFish";
            this->lblFish->Size = System::Drawing::Size(38, 13);
            this->lblFish->TabIndex = 0;
            this->lblFish->Text = L"Fish: 0";
            this->lblFish->Click += gcnew System::EventHandler(this, &ecogui::label1_Click);
            // 
            // lblStone
            // 
            this->lblStone->AutoSize = true;
            this->lblStone->Location = System::Drawing::Point(299, 16);
            this->lblStone->Name = L"lblStone";
            this->lblStone->Size = System::Drawing::Size(47, 13);
            this->lblStone->TabIndex = 0;
            this->lblStone->Text = L"Stone: 0";
            this->lblStone->Click += gcnew System::EventHandler(this, &ecogui::label1_Click);
            // 
            // lblOre
            // 
            this->lblOre->AutoSize = true;
            this->lblOre->Location = System::Drawing::Point(394, 16);
            this->lblOre->Name = L"lblOre";
            this->lblOre->Size = System::Drawing::Size(36, 13);
            this->lblOre->TabIndex = 0;
            this->lblOre->Text = L"Ore: 0";
            this->lblOre->Click += gcnew System::EventHandler(this, &ecogui::label1_Click);
            // 
            // lblCharcoal
            // 
            this->lblCharcoal->AutoSize = true;
            this->lblCharcoal->Location = System::Drawing::Point(14, 40);
            this->lblCharcoal->Name = L"lblCharcoal";
            this->lblCharcoal->Size = System::Drawing::Size(61, 13);
            this->lblCharcoal->TabIndex = 0;
            this->lblCharcoal->Text = L"Charcoal: 0";
            this->lblCharcoal->Click += gcnew System::EventHandler(this, &ecogui::label1_Click);
            // 
            // lblIron
            // 
            this->lblIron->AutoSize = true;
            this->lblIron->Location = System::Drawing::Point(128, 40);
            this->lblIron->Name = L"lblIron";
            this->lblIron->Size = System::Drawing::Size(37, 13);
            this->lblIron->TabIndex = 0;
            this->lblIron->Text = L"Iron: 0";
            this->lblIron->Click += gcnew System::EventHandler(this, &ecogui::label1_Click);
            // 
            // lblTools
            // 
            this->lblTools->AutoSize = true;
            this->lblTools->Location = System::Drawing::Point(206, 40);
            this->lblTools->Name = L"lblTools";
            this->lblTools->Size = System::Drawing::Size(45, 13);
            this->lblTools->TabIndex = 0;
            this->lblTools->Text = L"Tools: 0";
            this->lblTools->Click += gcnew System::EventHandler(this, &ecogui::label1_Click);
            // 
            // groupBox2
            // 
            this->groupBox2->Controls->Add(this->btnToolWorkshop);
            this->groupBox2->Controls->Add(this->btnIronSmelter);
            this->groupBox2->Controls->Add(this->btnStonemason);
            this->groupBox2->Controls->Add(this->btnFishermen);
            this->groupBox2->Controls->Add(this->btnIronMine);
            this->groupBox2->Controls->Add(this->btnLumberjack);
            this->groupBox2->Controls->Add(this->btnCharcoalBurner);
            this->groupBox2->Controls->Add(this->label2);
            this->groupBox2->Controls->Add(this->btnHouse);
            this->groupBox2->Controls->Add(this->label10);
            this->groupBox2->Controls->Add(this->label1);
            this->groupBox2->Controls->Add(this->label4);
            this->groupBox2->Controls->Add(this->label9);
            this->groupBox2->Controls->Add(this->label5);
            this->groupBox2->Controls->Add(this->label7);
            this->groupBox2->Controls->Add(this->label8);
            this->groupBox2->Location = System::Drawing::Point(22, 103);
            this->groupBox2->Name = L"groupBox2";
            this->groupBox2->Size = System::Drawing::Size(554, 157);
            this->groupBox2->TabIndex = 1;
            this->groupBox2->TabStop = false;
            this->groupBox2->Text = L"Build";
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Location = System::Drawing::Point(300, 26);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(13, 13);
            this->label7->TabIndex = 0;
            this->label7->Text = L"0";
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Location = System::Drawing::Point(120, 26);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(13, 13);
            this->label8->TabIndex = 0;
            this->label8->Text = L"0";
            // 
            // btnHouse
            // 
            this->btnHouse->Location = System::Drawing::Point(9, 21);
            this->btnHouse->Name = L"btnHouse";
            this->btnHouse->Size = System::Drawing::Size(108, 23);
            this->btnHouse->TabIndex = 1;
            this->btnHouse->Text = L"House";
            this->btnHouse->UseVisualStyleBackColor = true;
            this->btnHouse->Click += gcnew System::EventHandler(this, &ecogui::button1_Click);
            // 
            // btnLumberjack
            // 
            this->btnLumberjack->Location = System::Drawing::Point(186, 21);
            this->btnLumberjack->Name = L"btnLumberjack";
            this->btnLumberjack->Size = System::Drawing::Size(108, 23);
            this->btnLumberjack->TabIndex = 1;
            this->btnLumberjack->Text = L"Lumberjack\'s Hut";
            this->btnLumberjack->UseVisualStyleBackColor = true;
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Location = System::Drawing::Point(123, 71);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(13, 13);
            this->label4->TabIndex = 0;
            this->label4->Text = L"0";
            // 
            // btnStonemason
            // 
            this->btnStonemason->Location = System::Drawing::Point(9, 66);
            this->btnStonemason->Name = L"btnStonemason";
            this->btnStonemason->Size = System::Drawing::Size(108, 23);
            this->btnStonemason->TabIndex = 1;
            this->btnStonemason->Text = L"Stonemason\'s Hut";
            this->btnStonemason->UseVisualStyleBackColor = true;
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Location = System::Drawing::Point(297, 71);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(13, 13);
            this->label5->TabIndex = 0;
            this->label5->Text = L"0";
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->Location = System::Drawing::Point(458, 71);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(13, 13);
            this->label9->TabIndex = 0;
            this->label9->Text = L"0";
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->Location = System::Drawing::Point(123, 118);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(13, 13);
            this->label10->TabIndex = 0;
            this->label10->Text = L"0";
            // 
            // btnCharcoalBurner
            // 
            this->btnCharcoalBurner->Location = System::Drawing::Point(186, 66);
            this->btnCharcoalBurner->Name = L"btnCharcoalBurner";
            this->btnCharcoalBurner->Size = System::Drawing::Size(105, 23);
            this->btnCharcoalBurner->TabIndex = 1;
            this->btnCharcoalBurner->Text = L"Charcoal Burner";
            this->btnCharcoalBurner->UseVisualStyleBackColor = true;
            // 
            // btnIronMine
            // 
            this->btnIronMine->Location = System::Drawing::Point(344, 66);
            this->btnIronMine->Name = L"btnIronMine";
            this->btnIronMine->Size = System::Drawing::Size(108, 23);
            this->btnIronMine->TabIndex = 1;
            this->btnIronMine->Text = L"Iron Mine";
            this->btnIronMine->UseVisualStyleBackColor = true;
            // 
            // btnIronSmelter
            // 
            this->btnIronSmelter->Location = System::Drawing::Point(9, 113);
            this->btnIronSmelter->Name = L"btnIronSmelter";
            this->btnIronSmelter->Size = System::Drawing::Size(108, 23);
            this->btnIronSmelter->TabIndex = 1;
            this->btnIronSmelter->Text = L"Iron Smelter";
            this->btnIronSmelter->UseVisualStyleBackColor = true;
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(458, 26);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(13, 13);
            this->label1->TabIndex = 0;
            this->label1->Text = L"0";
            // 
            // btnFishermen
            // 
            this->btnFishermen->Location = System::Drawing::Point(344, 21);
            this->btnFishermen->Name = L"btnFishermen";
            this->btnFishermen->Size = System::Drawing::Size(108, 23);
            this->btnFishermen->TabIndex = 1;
            this->btnFishermen->Text = L"Fishermen\'s Hut";
            this->btnFishermen->UseVisualStyleBackColor = true;
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(300, 118);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(13, 13);
            this->label2->TabIndex = 0;
            this->label2->Text = L"0";
            // 
            // btnToolWorkshop
            // 
            this->btnToolWorkshop->Location = System::Drawing::Point(186, 113);
            this->btnToolWorkshop->Name = L"btnToolWorkshop";
            this->btnToolWorkshop->Size = System::Drawing::Size(108, 23);
            this->btnToolWorkshop->TabIndex = 1;
            this->btnToolWorkshop->Text = L"Tool Workshop";
            this->btnToolWorkshop->UseVisualStyleBackColor = true;
            // 
            // groupBox3
            // 
            this->groupBox3->Controls->Add(this->msgBox);
            this->groupBox3->Location = System::Drawing::Point(22, 278);
            this->groupBox3->Name = L"groupBox3";
            this->groupBox3->Size = System::Drawing::Size(554, 181);
            this->groupBox3->TabIndex = 3;
            this->groupBox3->TabStop = false;
            this->groupBox3->Text = L"Message";
            // 
            // msgBox
            // 
            this->msgBox->Location = System::Drawing::Point(9, 19);
            this->msgBox->Multiline = true;
            this->msgBox->Name = L"msgBox";
            this->msgBox->Size = System::Drawing::Size(539, 155);
            this->msgBox->TabIndex = 0;
            // 
            // ecogui
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(600, 480);
            this->Controls->Add(this->groupBox3);
            this->Controls->Add(this->groupBox2);
            this->Controls->Add(this->groupBox1);
            this->Name = L"ecogui";
            this->Text = L"ecogui";
            this->Load += gcnew System::EventHandler(this, &ecogui::ecogui_Load);
            this->groupBox1->ResumeLayout(false);
            this->groupBox1->PerformLayout();
            this->groupBox2->ResumeLayout(false);
            this->groupBox2->PerformLayout();
            this->groupBox3->ResumeLayout(false);
            this->groupBox3->PerformLayout();
            this->ResumeLayout(false);

        }
#pragma endregion
    private: System::Void ecogui_Load(System::Object^  sender, System::EventArgs^  e) {
    }
    private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
    }
    private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
    }
};
}
